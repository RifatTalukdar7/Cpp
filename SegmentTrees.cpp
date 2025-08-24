///Build
/*
#include"bits/stdc++.h"
using namespace std;
const int N=1e5+2;
int a[N],tree[4*N];
void build(int node,int st,int en){
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]=tree[2*node]+tree[2*node+1];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    for(int i=1;i<=15;i++){
        cout<<tree[i]<<endl;
    }


    return 0;
}
*/
///Query in Segment Tree
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int a[N],tree[4*N];
void build(int node,int st,int en){
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]=tree[2*node]+tree[2*node+1];
}
int query(int node,int st,int en,int l,int r){
    if(st>r || en<l){
        return 0;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return q1+q2;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    while(1){
        int type;
        cin>>type;
        if(type==-1){
            break;
        }
        if(type==1){
            int l,r;
            cin>>l>>r;
            int ans=query(1,0,n-1,l,r);
            cout<<ans<<endl;
        }
    }

    return 0;
}
*/
///Maximum and minimum queries/updates
/*
9
6 8 -1 2 17 1 3 2 4
1
2 6
17
2
7 18
18
-1
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+2;
int tree[4*N],a[N];
void build(int node,int st,int en){
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
int query(int node,int st,int en,int l,int r){
    if(st>r || en<l){
        return INT_MIN;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return max(q1,q2);
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        a[st]=val;
        tree[node]=val;
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,en,idx,val);
    }
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
signed main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    while(1){
        int type;
        cin>>type;
        if(type==-1){
            break;
        }
        if(type==1){
            int l,r;
            cin>>l>>r;
            int ans=query(1,0,n-1,l,r);
            cout<<ans<<endl;
        }
        else if(type==2){
            int idx,val;
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
            cout<<query(1,0,n-1,0,n-1)<<endl;
        }
    }

    return 0;
}
*/
///Number of minimums on a segment
/*
5 5
3 4 3 5 2
2 0 3
1 1 2
2 0 3
1 0 2
2 0 5
Output:
3 2
2 1
2 3
*/
/*
#include"bits/stdc++.h"
using namespace std;
#define int long long
const int N=1e5+2,MOD=1e9+7;
int a[N];
pair<int,int> tree[4*N];
void build(int node,int st,int en){
    if(st==en){
        tree[node].first=a[st];
        tree[node].second=1;
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    if(tree[2*node].first<tree[2*node+1].first){
        tree[node].first=tree[2*node].first;
        tree[node].second=tree[2*node].second;
    }
    else if(tree[2*node+1].first<tree[2*node].first){
        tree[node].first=tree[2*node+1].first;
        tree[node].second=tree[2*node+1].second;
    }
    else{
        tree[node].first=tree[2*node].first;
        tree[node].second=tree[2*node].second+tree[2*node+1].second;
    }
}
pair<int,int> query(int node,int st,int en,int l,int r){
    if(st>r || en<l){
        return {MOD,-1};
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid=(st+en)/2;
    pair<int,int> q1=query(2*node,st,mid,l,r);
    pair<int,int> q2=query(2*node+1,mid+1,en,l,r);
    pair<int,int> q;
    if(q1.first<q2.first){
        q=q1;
    }
    else if(q2.first<q1.first){
        q=q2;
    }
    else{
        q.first=q1.first;
        q.second=q1.second+q2.second;
    }
    return q;
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        a[st]=val;
        tree[node].first=val;
        tree[node].second=1;
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,en,idx,val);
    }
    if(tree[2*node].first<tree[2*node+1].first){
        tree[node].first=tree[2*node].first;
        tree[node].second=tree[2*node].second;
    }
    else if(tree[2*node+1].first<tree[2*node].first){
        tree[node].first=tree[2*node+1].first;
        tree[node].second=tree[2*node+1].second;
    }
    else{
        tree[node].first=tree[2*node].first;
        tree[node].second=tree[2*node].second+tree[2*node+1].second;
    }
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    while(m--){
        int type;
        cin>>type;
        if(type==1){
            int idx,val;
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
        }
        else if(type==2){
            int l,r;
            cin>>l>>r;
            pair<int,int> ans=query(1,0,n-1,l,r-1);
            cout<<ans.first<<" "<<ans.second<<endl;
        }
    }


    return 0;
}
*/
///user snippets in VS Code
///Segment with maximum sum
/*
5 2
5 -4 4 3 -5
4 3
3 -1
Output:
8
11
7
*/
/*
#include<bits/stdc++.h>
using namespace std;
class grp{
    public:
    long pref,suff,sum,ans;
    grp(long pref=0,long suff=0,long sum=0,long ans=0){
        this->pref=pref;
        this->suff=suff;
        this->sum=sum;
        this->ans=ans;
    }
};
const int N=100002;
long a[N];
grp tree[4*N];
void build(int node,int st,int en){
    if(st==en){
        if(a[st]<=0){
            tree[node]=grp(0,0,a[st],0);
        }
        else{
            tree[node]=grp(a[st],a[st],a[st],a[st]);
        }
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    long sum=tree[2*node].sum+tree[2*node+1].sum;
    long pref=max(tree[2*node].pref,tree[2*node].sum+tree[2*node+1].pref);
    long suff=max(tree[2*node+1].suff,tree[2*node+1].sum+tree[2*node].suff);
    long ans=max({tree[2*node].suff+tree[2*node+1].pref,tree[2*node].ans,tree[2*node+1].ans});
    tree[node]=grp(pref,suff,sum,ans);
}
void update(int node,int st,int en,int idx,long val){
    if(st==en){
        a[st]=val;
        if(a[st]<=0){
            tree[node]=grp(0,0,a[st],0);
        }
        else{
            tree[node]=grp(a[st],a[st],a[st],a[st]);
        }
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,en,idx,val);
    }
    long sum=tree[2*node].sum+tree[2*node+1].sum;
    long pref=max(tree[2*node].pref,tree[2*node].sum+tree[2*node+1].pref);
    long suff=max(tree[2*node+1].suff,tree[2*node+1].sum+tree[2*node].suff);
    long ans=max({tree[2*node].suff+tree[2*node+1].pref,tree[2*node].ans,tree[2*node+1].ans});
    tree[node]=grp(pref,suff,sum,ans);
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    cout<<tree[1].ans<<endl;
    for(int i=0;i<m;i++){
        int idx,val;
        cin>>idx>>val;
        update(1,0,n-1,idx,val);
        cout<<tree[1].ans<<endl;
    }

    return 0;
}
*/
///segment tree + binary search (First element at least X)
/*
5 7
1 3 2 4 6
2 2
2 5
1 2 5
2 4
2 8
1 3 7
2 6
Output:
1
4
2
-1
3
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+2,MOD=1e9+7;
int tree[4*N],a[N];
void build(int node,int st,int en){
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
int query(int node,int st,int en,int l,int r){
    if(st>r || en<l){
        return -MOD;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return max(q1,q2);
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        a[st]=val;
        tree[node]=val;
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,en,idx,val);
    }
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    while(m--){
        int type;
        cin>>type;
        if(type==1){
            int idx,val;
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
        }
        else if(type==2){
            int x;
            cin>>x;
            int lo=0,hi=n-1;
            int ans=n;
            while(lo<=hi){
                int mid=(lo+hi)/2;
                if(query(1,0,n-1,lo,mid)<x){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                    ans=min(ans,mid);
                }
            }
            if(ans==n){
                cout<<"-1"<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
*/
///First element at least X - 2
/*
5 7
1 3 2 4 3
2 3 0
2 3 2
1 2 5
2 4 1
2 5 4
1 3 7
2 6 1
Output:
1
3
2
-1
3
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+2,MOD=1e9+7;
int tree[4*N],a[N];
void build(int node,int st,int en){
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
int query(int node,int st,int en,int l,int r){
    if(st>r || en<l){
        return -MOD;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return max(q1,q2);
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        a[st]=val;
        tree[node]=val;
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,en,idx,val);
    }
    tree[node]=max(tree[2*node],tree[2*node+1]);
}
signed main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    while(m--){
        int type;
        cin>>type;
        if(type==1){
            int idx,val;
            cin>>idx>>val;
            update(1,0,n-1,idx,val);
        }
        else if(type==2){
            int x,l;
            cin>>x>>l;
            int lo=l,hi=n-1;
            int ans=n;
            while(lo<=hi){
                int mid=(lo+hi)/2;
                if(query(1,0,n-1,lo,mid)<x){
                    lo=mid+1;
                }
                else{
                    hi=mid-1;
                    ans=min(ans,mid);
                }
            }
            if(ans==n){
                cout<<"-1"<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
*/
///Kth One
/*
5 7
1 1 0 1 0
2 0
2 1
2 2
1 2
2 3
1 0
2 0
Output:
0
1
3
3
1
*/
/*
#include<bits/stdc++.h>
using namespace std;
const int N=100002;
int a[N],tree[4*N];
void build(int node,int st,int en){
    if(st==en){
        tree[node]=a[st];
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    tree[node]=tree[2*node]+tree[2*node+1];
}
void update(int node,int st,int en,int idx){
    if(st==en){
        if(a[st]==0){
            a[st]==1;
            tree[node]=1;
        }
        else{
            a[st]=0;
            tree[node]=0;
        }
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx);
    }
    else{
        update(2*node+1,mid+1,en,idx);
    }
    tree[node]=tree[2*node]+tree[2*node+1];
}
int query(int node,int st,int en,int k){
    if(st==en){
        return st;
    }
    int mid=(st+en)/2;
    if(k<tree[2*node]){
        return query(2*node,st,mid,k);
    }
    else{
        return query(2*node+1,mid+1,en,k-tree[2*node]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    build(1,0,n-1);
    for(int i=0;i<m;i++){
        int type;
        cin>>type;
        if(type==1){
            int idx;
            cin>>idx;
            update(1,0,n-1,idx);
        }
        else{
            int k;
            cin>>k;
            cout<<query(1,0,n-1,k)<<endl;
        }
    }

    return 0;
}
*/
///Nested Segment
/*
5
5 1 2 2 3 1 3 4 5 4
Output:
1 0 0 0 3
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+2,MOD=1e9+7;
int tree[4*N];
struct triplet{
    int l,r,idx;
};
int query(int node,int st,int en,int l,int r){
    if(st>r || en<l){
        return 0;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return q1+q2;
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        cout<<node<<endl;
        tree[node]=val;
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,en,idx,val);
    }
    tree[node]=tree[2*node]+tree[2*node+1];
}
bool comp(triplet t1,triplet t2){
    return t1.r<t2.r;
}
signed main()
{
    int n;
    cin>>n;
    triplet t1;
    t1.l=t1.r=-1;
    vector<triplet> t(n,t1);
    int x;
    for(int i=0;i<2*n;i++){
        cin>>x;
        if(t[x-1].l==-1){
            t[x-1].l=i;
        }
        else{
            t[x-1].r=i;
        }
        t[x-1].idx=x;
    }
    sort(t.begin(),t.end(),comp);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[t[i].idx-1]=query(1,0,2*n-1,t[i].l,t[i].r);
        cout<<t[i].idx<<" "<<t[i].l<<" "<<t[i].r<<" "<<ans[t[i].idx-1]<<endl;
        update(1,0,2*n-1,t[i].l,1);
        for(auto i=0;i<=20;i++) cout<<tree[i]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}

///Intersecting segment
/*
5
5 1 2 2 3 1 3 4 5 4
Output:
1 0 1 1 1
*/
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+2,MOD=1e9+7;
int tree[4*N];
struct triplet{
    int l,r,idx;
};
int query(int node,int st,int en,int l,int r){
    if(st>r || en<l){
        return 0;
    }
    if(l<=st && en<=r){
        return tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return q1+q2;
}
void update(int node,int st,int en,int idx,int val){
    if(st==en){
        tree[node]=val;
        return;
    }
    int mid=(st+en)/2;
    if(idx<=mid){
        update(2*node,st,mid,idx,val);
    }
    else{
        update(2*node+1,mid+1,en,idx,val);
    }
    tree[node]=tree[2*node]+tree[2*node+1];
}
bool comp(triplet t1,triplet t2){
    return t1.r<t2.r;
}
signed main()
{
    int n;
    cin>>n;
    triplet t1;
    t1.l=t1.r=-1;
    vector<triplet> t(n,t1);
    int x;
    for(int i=0;i<2*n;i++){
        cin>>x;
        if(t[x-1].l==-1){
            t[x-1].l=i;
        }
        else{
            t[x-1].r=i;
        }
        t[x-1].idx=x;
    }
    sort(t.begin(),t.end(),comp);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[t[i].idx-1]=(t[i].r-t[i].l-1) - 2*query(1,0,2*n-1,t[i].l,t[i].r);
        update(1,0,2*n-1,t[i].l,1);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
*/











