///Square root decomposition
/*
#include"bits/stdc++.h"
using namespace std;
#define int long long
const int N=1e5+2,MOD=1e9+7;
signed main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int len=sqrt(n)+1;
    vector<int> b(len);
    for(int i=0;i<n;i++){
        b[i/len]+=a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        int sum=0;
        for(int i=l;i<=r;){
            if(i%len==0 && i+len-1<=r){
                sum+=b[i/len];
                i+=len;
            }
            else{
                sum+=a[i];
                i++;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
*/
///RMQSQ-SPOJ question using SQRT Decomposition
/*
#include"bits/stdc++.h"
using namespace std;
#define int long long
const int N=1e5+2,MOD=1e9+7;
signed main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int len=(int)sqrtl(n)+1;
    vector<int> b(len,MOD);
    for(int i=0;i<n;i++){
        b[i/len]=min(b[i/len],a[i]);
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int ans=MOD;
        for(int i=l;i<=r;){
            if(i%len==0 && i+len-1<=r){
                ans=min(ans,b[i/len]);
                i+=len;
            }
            else{
                ans=min(ans,a[i]);
                i++;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}
*/
///Mo's Algorithm
/*
#include"bits/stdc++.h"
using namespace std;
#define int long long
const int N=1e5+2,MOD=1e9+7;
int rootN;
struct Q{
    int idx,l,r;
};
Q q[N];
bool compare(Q q1,Q q2){
    if(q1.l/rootN==q2.l/rootN){
        return q1.r>q2.r;
    }
    return q1.l/rootN<q2.l/rootN;
}
signed main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rootN=sqrtl(n);
    int queries;
    cin>>queries;
    for(int i=0;i<queries;i++){
        int l,r;
        cin>>l>>r;
        q[i].l=l;
        q[i].r=r;
        q[i].idx=i;
    }
    sort(q,q+queries,compare);
    vector<int> ans(queries);
    int curr_l=0,curr_r=-1,l,r;
    int curr_ans=0;
    for(int i=0;i<queries;i++){
        l=q[i].l;r=q[i].r;
        l--;r--;
        while(curr_r<r){
            curr_r++;
            curr_ans+=a[curr_r];
        }
        while(curr_l>l){
            curr_l--;
            curr_ans+=a[curr_l];
        }
        while(curr_l<l){
            curr_ans-=a[curr_l];
            curr_l++;
        }
        while(curr_r>r){
            curr_ans-=a[curr_r];
            curr_r--;
        }
        ans[q[i].idx]=curr_ans;
    }
    for(int i=0;i<queries;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
*/
///DQUERY-SPOJ Question using Mo's algorithm
#include"bits/stdc++.h"
using namespace std;
#define int long long
const int N=1e5+2,MOD=1e9+7;
int rootN;
struct Q{
    int idx,l,r;
};
Q q[N];
bool compare(Q q1,Q q2){
    if(q1.l/rootN==q2.l/rootN){
        return q1.r>q2.r;
    }
    return q1.l/rootN<q2.l/rootN;
}
signed main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rootN=sqrtl(n);
    int queries;
    cin>>queries;
    for(int i=0;i<queries;i++){
        int l,r;
        cin>>l>>r;
        q[i].l=l;
        q[i].r=r;
        q[i].idx=i;
    }
    sort(q,q+queries,compare);
    vector<int> ans(queries);
    int curr_l=0,curr_r=-1,l,r;
    int curr_ans=0;
    vector<int> freq(10*N,0);
    for(int i=0;i<queries;i++){
        l=q[i].l;r=q[i].r;
        l--;r--;
        while(curr_r<r){
            curr_r++;
            freq[a[curr_r]]++;
            if(freq[a[curr_r]]==1)
                curr_ans++;
        }
        while(curr_l>l){
            curr_l--;
            freq[a[curr_l]]++;
            if(freq[a[curr_l]]==1)
                curr_ans++;
        }
        while(curr_l<l){
            freq[a[curr_l]]--;
            curr_l++;
            if(freq[a[curr_l]]==0)
                curr_ans--;
        }
        while(curr_r>r){
            freq[a[curr_r]]--;
            curr_r--;
            if(freq[a[curr_r]]==0)
                curr_ans--;
        }
        ans[q[i].idx]=curr_ans;
    }
    for(int i=0;i<queries;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}
