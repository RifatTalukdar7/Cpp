///Indian Coin Change
/*
10
1 2 5 10 20 50 100 200 500 2000
350
3
#include"bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) bulitin_popcount(x)
signed main()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    int x;
    cin>>x;
    sort(a.begin(),a.end(),greater<int>());
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=x/a[i];
        x-=x/a[i]*a[i];
    }
    cout<<ans<<endl;


    return 0;
}*/
///Activity Selection Problem
/*
Test 1:
3
10 20
12 15
20 30
2
#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int start,End;
        cin>>start>>End;
        v.push_back({start,End});
    }
    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    });
    int take=1;
    int End=v[0][1];
    for(int i=1;i<n;i++){
        if(v[i][0]>=End){
            take++;
            End=v[i][1];
        }
    }
    cout<<take<<"\n";




    return 0;
}*/
///Factional Knapsack
/*
5
21 7
24 4
12 6
40 5
30 6
20
109
#include"bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) bulitin_popcount(x)
bool compare(pii p1,pii p2){
    double v1=(double)p1.ff/p1.ss;
    double v2=(double)p2.ff/p2.ss;
    return v1>v2;
}
signed main()
{
    int n;cin>>n;
    vii a(n);
    rep(i,0,n){
        cin>>a[i].ff>>a[i].ss;
    }
    int w;cin>>w;
    sort(a.begin(),a.end(),compare);
    int ans=0;
    rep(i,0,n){
        if(w>=a[i].ss){
            ans+=a[i].ff;
            w-=a[i].ss;
            continue;
        }
        double vw=(double)a[i].ff/a[i].ss;
        ans+=vw*w;
        w=0;
        break;
    }
    cout<<ans<<endl;


    return 0;
}*/
///Optimal merge pattern
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<int,vector<int>,greater<int>> minheap;
    for(int i=0;i<n;i++){
        minheap.push(a[i]);
    }
    int ans=0;
    while(minheap.size()>1){
        int e1=minheap.top();
        minheap.pop();
        int e2=minheap.top();
        minheap.pop();
        ans+=e1+e2;
        minheap.push(e1+e2);
    }
    cout<<ans<<endl;



    return 0;
}*/
///Expedi
/*
1
4
4 4
5 2
11 5
15 10
25 10
2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<pair<int,int>> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first>>a[i].second;
        }
        int l,p;
        cin>>l>>p;
        for(int i=0;i<n;i++){
            a[i].first=l-a[i].first;
        }
        sort(a.begin(),a.end());
        int ans=0;
        int curr=p;
        priority_queue<int,vector<int>> pq;
        bool flag=0;
        for(int i=0;i<n;i++){
            if(curr>=l){
                break;
            }
            while(curr<a[i].first){
                if(pq.empty()){
                    flag=1;
                    break;
                }
                ans++;
                curr+=pq.top();
                pq.pop();
            }
            if(flag)
                break;
            pq.push(a[i].second);
        }
        if(flag){
            cout<<"-1"<<endl;
            continue;
        }
        while(!pq.empty() && curr<l){
            curr+=pq.top();
            pq.pop();
            ans++;
        }
        if(curr<l){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<ans<<endl;
    }



    return 0;
}*/
///Max and Min Array Difference
/*
Test 1:
4
-3 12 10 0
5 25

#include"bits/stdc++.h"
using namespace std;
int32_t main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int &i: a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    long long mx=0,mn=0;
    for(int i=0;i<n/2;i++){
        mx+=(a[i+n/2]-a[i]);
        mn+=(a[2*i+1]-a[2*i]);
    }
    cout<<mn<<" "<<mx;


    return 0;
}*/









