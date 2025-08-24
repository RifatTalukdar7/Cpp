///Heapsort

#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
/*
void heapify(vi &a,int n,int i){
    int maxIdx=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[maxIdx]){
        maxIdx=l;
    }
    if(r<n && a[r]>a[maxIdx]){
        maxIdx=r;
    }
    if(maxIdx !=i){
        swap(a[i],a[maxIdx]);
        heapify(a,n,maxIdx);
    }
}
void heapsort(vi &a){
    int n=a.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
signed main()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }
    heapsort(a);
    rep(i,0,n){
        cout<<a[i]<<" ";
    }
    return 0;
}
*/
///Heap STL
/*
signed main()
{
    priority_queue<int,vector<int>> pq;
    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    priority_queue<int,vi,greater<int>> pqm;
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);
    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;

    return 0;
}
*/
///Median of running Stream
/*
priority_queue<int,vi,greater<int>> pqmin;
priority_queue<int,vi> pqmax;
void Insert(int x){
    if(pqmin.size()==pqmax.size()){
        if(pqmax.size()==0){
            pqmax.push(x);
            return;
        }
        if(x<pqmax.top()){
            pqmax.push(x);
        }
        else{
            pqmin.push(x);
        }
    }
    else{
        //two cases possible
        //case 1: size of maxHeap>size of minHeap
        //case 2: size of minHeap>size of maxHeap
        if(pqmax.size()>pqmin.size()){
            if(x>=pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp=pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else{
            if(x<=pqmin.top()){
                pqmax.push(x);
            }
            else{
                int temp=pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}
double findMedian()
{

    if(pqmax.size()==pqmin.size()){
        return (pqmin.top()+pqmax.top())/2.0;
    }
    else if(pqmax.size()>pqmin.size()){
        return pqmax.top();
    }
    else{
        return pqmin.top();
    }
}
signed main()
{
    Insert(10);
    cout<<findMedian()<<endl;
    Insert(15);
    cout<<findMedian()<<endl;
    Insert(21);
    cout<<findMedian()<<endl;
    Insert(30);
    cout<<findMedian()<<endl;
    Insert(18);
    cout<<findMedian()<<endl;
    Insert(19);
    cout<<findMedian()<<endl;



    return 0;
}
*/
///Merge K sorted arrays
/*
signed main()
{
    int k;cin>>k;
    vector<vector<int>> a(k);
    rep(i,0,k){
        int Size;
        cin>>Size;
        a[i]=vector<int>(Size);
        rep(j,0,Size){
            cin>>a[i][j];
        }
    }
    vector<int> idx(k,0);
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    rep(i,0,k){
        pq.push({a[i][0],i});
    }
    vi ans;
    while(!pq.empty()){
        pii x=pq.top();
        pq.pop();
        ans.push_back(x.ff);
        if(idx[x.ss]+1<a[x.ss].size())
            pq.push({a[x.ss][idx[x.ss]+1],x.ss});
        idx[x.ss]+=1;
    }
    rep(i,0,ans.size()){
        cout<<ans[i]<<endl;
    }
    cout<<endl;

    return 0;
}
*/
///Smallest Subsequence with sum K
/*
signed main()
{
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    priority_queue<int,vi> pq;
    rep(i,0,n){
        pq.push(a[i]);
    }
    int sum=0;
    int cnt=0;
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
        cnt++;
        if(sum>=k) break;
    }
    if(sum<k) cout<<"-1"<<endl;
    else cout<<cnt<<endl;

    return 0;
}
*/





