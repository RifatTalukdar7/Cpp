///STL Hashing
/*
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
///#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define pi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ssBits(x) builtin_popcount(x)
signed main()
{
    map<int,int> m;
    m[8]=2;
    cout<<m[8]<<endl;

    return 0;
}*/
///Count Frequency of elements
/*
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
///#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define pi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ssBits(x) builtin_popcount(x)
signed main()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ///map<int,int> freq;
    unordered_map<int,int> freq;
    rep(i,0,n){
        freq[a[i]]++;
    }
    unordered_map<int,int>::iterator itr;
    for(itr=freq.begin();itr!=freq.end();itr++){
        cout<<itr->ff<<" "<<itr->ss<<endl;
    }

    return 0;
}*/
///Vertical Order Print
/*
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node* left,*right;
};
Node *newNode(int key){
    Node *node=new Node;
    node->key=key;
    node->left=node->right=NULL;
    return node;
}
void getVerticalOrder(Node *root,int hdris,map<int,vector<int>> &m){
    if(root==NULL){
        return;
    }
    m[hdris].push_back(root->key);
    getVerticalOrder(root->left,hdris-1,m);
    getVerticalOrder(root->right,hdris+1,m);
}
int main()
{
    Node *root=newNode(10);
    root->left=newNode(7);
    root->right=newNode(4);
    root->left->left=newNode(3);
    root->left->right=newNode(11);
    root->right->left=newNode(14);
    root->right->right=newNode(6);

    map<int,vector<int>> m;
    int hdis=0;

    getVerticalOrder(root,hdis,m);

    map<int,vector<int>> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        for(int i=0;i<(it->second).size();i++){
            cout<<it->second[i]<<" ";
        }cout<<endl;
    }

    return 0;
}
*/
///Number of subarrays with sum zero
/*
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
///#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define pi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ssBits(x) builtin_popcount(x)
signed main()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    map<int,int> cnt;
    int prefSum=0;
    rep(i,0,n){
        prefSum+=a[i];
        cnt[prefSum]++;
    }
    int ans=0;
    map<int,int>::iterator it;
    for(it=cnt.begin();it!=cnt.end();it++){
        int c=it->ss;
        ans+=(c*(c-1))/2;
        if(it->ff==0){
            ans+=it->ss;
        }
    }
    cout<<ans<<endl;


    return 0;
}
*/
///Sliding Window technique
/*
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
///#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define pi vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ssBits(x) builtin_popcount(x)
signed main()
{
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    int s=0,ans=INT_MAX;
    rep(i,0,k){
        s+=a[i];
    }
    ans=min(ans,s);
    cout<<s<<" ";
    /// sliding
    rep(i,1,n-k+1){
        s-=a[i-1];
        s+=a[i+k-1];
        ans=min(ans,s);
        cout<<s<<" ";
    }cout<<endl;
    cout<<ans<<endl;


    return 0;
}
*/
///Top k most Frequency element in the stream
/*
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
///#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define ssBits(x) builtin_popcount(x)
signed main()
{
    int n,k;
    cin>>n>>k;
    vi a(n);
    rep(i,0,n)
    {
        cin>>a[i];
    }
    map<int,int> freq;
    rep(i,0,n)
    {
        int presentSize=freq.size();
        if(freq[a[i]]==0 && presentSize==k)
            break;
        freq[a[i]]++;
    }
    vii ans;
    map<int,int>:: iterator it;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->ss !=0){
            ans.push_back({it->ss,it->ff});
        }
    }
    sort(ans.begin(),ans.end(),greater<pii>());
    vii :: iterator it1;
    for(it1=ans.begin();it1!=ans.end();it1++){
        cout<<it1->ss<<" "<<it1->ff<<endl;
    }


    return 0;
}*/
