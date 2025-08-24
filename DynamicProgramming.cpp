#include"bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) biltin_popcount(x)
const int N=1e3+2,MOD=1e9+7;

///Nth Fibonacci Number
/*
int dp[N];
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=fib(n-1)+fib(n-2);
    return dp[n];
}
signed main()
{
    int n;
    cin>>n;
    ///Tabulation
    vi dp(n+1);
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<endl;

    return 0;
}*/
///Minimum Number of Squares
/*
int MinSquare(int n){
    if(n==1 || n==2 || n==3 || n==0) return n;
    int ans=MOD;
    for(int i=1;i*i<=n;i++){
        ans=min(ans,1+MinSquare(n-i*i));
    }
    return ans;
}*/
/*
int dp[N];
int MinSquare(int n){
    if(n==1 || n==2 || n==3 || n==0) return n;
    if(dp[n]!=MOD){
        return dp[n];
    }
    for(int i=1;i*i<=n;i++){
        dp[n]=min(dp[n],1+MinSquare(n-i*i));
    }
    return dp[n];
}
signed main()
{
    rep(i,0,N)
    {
        dp[i]=MOD;
    }
    int n;
    cin>>n;
    cout<<MinSquare(n)<<endl;



    return 0;
}*/
/*
signed main()
{
    int n;
    cin>>n;
    vi dp(n+1,MOD);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=1;i*i<=n;i++){
        for(int j=0;i*i+j<=n;j++){
            dp[i*i+j]=min(dp[i*i+j],1+dp[j]);
        }
    }
    cout<<dp[n]<<endl;

    return 0;
}*/
///coin change problem
/*
int CoinChange(vi &a,int n,int x){
    if(x==0) return 1;
    if(x<0) return 0;
    if(n<=0) return 0;
    return CoinChange(a,n,x-a[n-1])+CoinChange(a,n-1,x);
}
*/
/*
int dp[N][N];
int CoinChange(vi &a,int n,int x){
    if(x==0) return 1;
    if(x<0) return 0;
    if(n<=0) return 0;
    if(dp[n][x]!=-1) return dp[n][x];
    dp[n][x]=CoinChange(a,n,x-a[n-1])+CoinChange(a,n-1,x);
    return dp[n][x];
}
signed main()
{
    rep(i,0,N)
    {
        rep(j,0,N)
        dp[i][j]=-1;
    }
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    int x;
    cin>>x;
    cout<<CoinChange(a,n,x)<<endl;

    return 0;
}*/
/*
signed main()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    int x;
    cin>>x;
    vvi dp(n+1,vi(x+1,0));
    dp[0][0]=1;
    rep(i,1,n+1)
    {
        rep(j,0,x+1)
        {
            if(j-a[i-1]>=0)
                dp[i][j]+=dp[i][j-a[i-1]];
            dp[i][j]+=dp[i-1][j];
        }
    }
    cout<<dp[n][x]<<endl;

    return 0;
}*/
/// 0 1 Knapsack
/*
int val[N],wt[N];
int Knapsack(int n,int w){
    if(w<=0) return 0;
    if(n<=0) return 0;
    if(wt[n-1]>w){
        return Knapsack(n-1,w);
    }
    return max(Knapsack(n-1,w),Knapsack(n-1,w-wt[n-1])+val[n-1]);
}
signed main()
{
    int n;
    cin>>n;
    rep(i,0,n){
        cin>>wt[i];
    }
    rep(i,0,n){
        cin>>val[i];
    }
    int w;
    cin>>w;
    cout<<Knapsack(n,w)<<endl;


    return 0;
}
*/
/*
int val[N],wt[N];
int dp[N][N];
int Knapsack(int n,int w){
    if(w<=0) return 0;
    if(n<=0) return 0;
    if(dp[n][w]!=-1) return dp[n][w];
    if(wt[n-1]>w) return Knapsack(n-1,w);
    else dp[n][w]=max(Knapsack(n-1,w),Knapsack(n-1,w-wt[n-1])+val[n-1]);
    return dp[n][w];
}
signed main()
{
    rep(i,0,N){
        rep(j,0,N)
            dp[i][j]=-1;
    }
    int n;
    cin>>n;
    rep(i,0,n){
        cin>>wt[i];
    }
    rep(i,0,n){
        cin>>val[i];
    }
    int w;
    cin>>w;
    cout<<Knapsack(n,w)<<endl;


    return 0;
}*/
/// Longest increasing subsequence
/*
9
10 22 9 33 21 50 52 60 80
output: 7

int dp[N];
int lis(vi &a,int n){
    if(dp[n]!=-1) return dp[n];
    dp[n]=1;
    rep(i,0,n){
        if(a[n]>a[i]){
            dp[n]=max(dp[n],1+lis(a,i));
        }
    }
    return dp[n];
}
signed main()
{
    rep(i,0,N)
        dp[i]=-1;
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    cout<<lis(a,n-1)<<endl;

    return 0;
}
*/
/*
signed main()
{
    int n;
    cin>>n;
    vi a(n);
    rep(i,0,n){
        cin>>a[i];
    }
    vi dp(n,1);
    int ans=0;
    rep(i,1,n){
        rep(j,0,i){
            if(a[i]>a[j])
                dp[i]=max(dp[i],1+dp[j]);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;

    return 0;
}
*/
///Longest Common Subsequence
/*
rishabh
shubhi
output: 4
*/
/*
int lcs(string &s1,string &s2,int n,int m){
    if(n==0 || m==0) return 0;
    if(s1[n-1]==s2[m-1]) return 1+lcs(s1,s2,n-1,m-1);
    else return max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
}
signed main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    cout<<lcs(s1,s2,n,m)<<endl;

    return 0;
}
*/
/*
int dp[N][N];
int lcs(string &s1,string &s2,int n,int m){
    if(n==0 || m==0) return 0;
    if(dp[n][m]!=-1) return dp[n][m];
    if(s1[n-1]==s2[m-1]) dp[n][m]=1+lcs(s1,s2,n-1,m-1);
    else dp[n][m]=max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
    return dp[n][m];
}
signed main()
{
    rep(i,0,N){
        rep(j,0,N){
            dp[i][j]=-1;
        }
    }

    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    cout<<lcs(s1,s2,n,m)<<endl;

    return 0;
}
*/
/*
signed main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    vvi dp(n+1,vi(m+1,-1));
    rep(i,0,n+1){
        rep(j,0,m+1){
            if(i==0 ||j==0){
                dp[i][j]=0;
                continue;
            }
            if(s1[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m]<<endl;

    return 0;
}
*/
/// Matrix chain multiplication
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=102,MOD=1e9+7;
int a[N];
int dp[N][N];
int mcm(int i,int j){
    if(i==j){
        return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    dp[i][j]=MOD;
    for(int k=i;k<j;k++){
        dp[i][j]=min(dp[i][j],mcm(i,k)+mcm(k+1,j)+a[i-1]*a[k]*a[j]);
    }
    return dp[i][j];
}
signed main()
{
    memset(dp,-1,sizeof(dp));
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<mcm(1,n-1)<<endl;


    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=102,MOD=1e9+7;
int dp[N][N];
int a[N];
signed main()
{
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        dp[i][i]=0;
    }
    for(int l=2;l<n;l++){
        for(int i=1;i<n-l+1;i++){
            int j=i+l-1;
            dp[i][j]=MOD;
            for(int k=i;k<j;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+a[i-1]*a[k]*a[j]);
            }
        }
    }
    cout<<dp[1][n-1]<<endl;


    return 0;
}
*/
///Minimum jumps to reach end
/*
11
1 3 5 8 9 2 6 7 6 8 9
output : 3

const int inf=1e9;
signed main()
{
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &i:arr){
        cin>>i;
    }
    vector<int> jumps(n,inf);
    if(arr[0]==0){
        cout<<inf<<" ";
        return 0;
    }
    jumps[0]=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(i<=(j+arr[j])){
                jumps[i]=min(jumps[i],jumps[j]+1);
            }
        }
    }
    cout<<jumps[n-1];

    return 0;
}
*/
///Optimal game strategy
/*
4
1 2 3 4
Output: 6
*/
/*
vi a;
int dp[N][N];
int solve(int i,int j){
    if(i==j) return a[i];
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int l=a[i]+min(solve(i+2,j),solve(i+1,j-1));
    int r=a[j]+min(solve(i,j-2),solve(i+1,j-1));
    return dp[i][j]=max(l,r);
}
int32_t main()
{
    memset(dp,-1,sizeof(dp));
    int n;cin>>n;
    a=vector<int>(n);
    for(auto &i:a){
        cin>>i;
    }
    cout<<solve(0,n-1)<<endl;


    return 0;
}
*/
///Number of subsequences
/*
6
ac?b?c
output : 24
*/
/*
signed main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int e=1,a=0,ab=0,abc=0;
    rep(i,0,n){
        if(s[i]=='a') a+=e;
        else if(s[i]=='b') ab+=a;
        else if(s[i]=='c') abc+=ab;
        else if(s[i]=='?'){
            abc+=3*abc+ab;
            ab=3*ab+a;
            a=3*a+e;
        }
    }
    cout<<abc<<endl;


    return 0;
}
*/
///Count the no of binary string without consecutive 1s
/*
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> fib(n+2,0);
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<=n+1;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout<<fib[n+1];


    return 0;
}
*/
/// 0-N Knapsack
/*
Output: 16
*/
/*
int32_t main()
{
    int n=5,w=11;
    vector<int> wt={3,2,4,5,1};
    vector<int> val={4,3,5,6,1};
    vector<int> dp(w+1,0);
    for(int j=0;j<=w;j++){
        for(int i=0;i<n;i++){
            if(j-wt[i]>=0) dp[j]=max(dp[j],val[i]+dp[j-wt[i]]);
        }
    }
    cout<<dp[w]<<endl;


    return 0;
}
*/
/// Kadane's Algorithm (Maximum Subarray Sum)
/*
8
-5 -1 5 -3 -1 2 3 -6
Output: 6
signed main()
{
    int n;cin>>n;
    vi a(n);
    rep(i,0,n)
        cin>>a[i];
    int curr=0,maxTillNow=0;
    rep(i,0,n){
        curr+=a[i];
        maxTillNow=max(curr,maxTillNow);
        if(curr<0)
            curr=0;
    }
    cout<<maxTillNow<<endl;

    return 0;
}
*/
///Maximum Length bitonic Subsequences
/*
Output: 6
int32_t main()
{
    int n=8;
    vector<int> a={1,11,2,10,4,5,2,1};
    vector<int> Forward(n,1),backward(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                Forward[i]=max(Forward[i],1+Forward[j]);
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(a[i]>a[j]){
                backward[i]=max(backward[i],1+backward[j]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,Forward[i]+backward[i]-1);
    }
    cout<<ans;


    return 0;
}
*/
///Frinds pairing problem
/*
3
Output: 4
int32_t main()
{
    int n;cin>>n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+(i-1)*dp[i-2];
    }
    cout<<dp[n];


    return 0;
}*/

///Ugly Number
/*
Output: 12
*/
/*
int32_t main()
{
    int n=10;
    int c2(0),c3(0),c5(0);
    vector<int> dp(n+1);
    dp[0]=1;
    for(int i=1;i<=n;i++){
        dp[i]=min({2*dp[c2],3*dp[c3],5*dp[c5]});
        if(2*dp[c2]==dp[i]){
            cout<<"c2 "<<i<<endl;
            c2++;
        }
        if(3*dp[c3]==dp[i]){
            cout<<"c3 "<<i<<endl;
            c3++;
        }
        if(5*dp[c5]==dp[i]){
            cout<<"c5 "<<i<<endl;
            c5++;
        }
    }
    cout<<dp[n-1]<<endl;
    cout<<c2<<" "<<c3<<" "<<c5<<endl;

    return 0;
}
*/
///LCS with 3 strings
/*
apna
collegeap
annnnp
Output: 2
*/
/*
int LCS(string &s1,string &s2,string &s3,int i,int j,int k){
    if(i==0 || j==0 || k==0) return 0;
    if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]) return 1+LCS(s1,s2,s3,i-1,j-1,k-1);
    int l=LCS(s1,s2,s3,i-1,j,k);
    int r=LCS(s1,s2,s3,i,j-1,k);
    int p=LCS(s1,s2,s3,i,j,k-1);
    return max({l,r,p});
}
int main()
{
    string s1;cin>>s1;
    string s2;cin>>s2;
    string s3;cin>>s3;
    cout<<LCS(s1,s2,s3,s1.size(),s2.size(),s3.size());

    return 0;
}
*/
/*
int dp[205][205][205];
int LCS(string &s1,string &s2,string &s3,int i,int j,int k){
    if(i==0 || j==0 || k==0) return 0;
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1]) return dp[i][j][k]=1+LCS(s1,s2,s3,i-1,j-1,k-1);
    int l=LCS(s1,s2,s3,i-1,j,k);
    int r=LCS(s1,s2,s3,i,j-1,k);
    int p=LCS(s1,s2,s3,i,j,k-1);
    return dp[i][j][k]=max({l,r,p});
}
int main()
{
    memset(dp,-1,sizeof(dp));
    string s1;cin>>s1;
    string s2;cin>>s2;
    string s3;cin>>s3;
    cout<<LCS(s1,s2,s3,s1.size(),s2.size(),s3.size());

    return 0;
}
*/
/// K ordered LCS
/*
5 5 1
1 2 3 4 5
5 3 1 4 2
Output: 3
*/
/*
int n,m,k;
vector<int> a,b;
int solve(int i,int j,int k){
    if(i==n || j==m){
        return 0;
    }
    int c1(0),c2(0),c3(0);
    if(a[i]==b[j]) c1=1+solve(i+1,j+1,k);
    if(k>0) c2=1+solve(i+1,j+1,k-1);
    c3=max(solve(i+1,j,k),solve(i,j+1,k));
    return max({c1,c2,c3});
}
int32_t main()
{
    cin>>n>>m>>k;
    a=vector<int>(n);
    b=vector<int>(m);
    for(int &i:a){
        cin>>i;
    }
    for(auto &i:b){
        cin>>i;
    }
    cout<<solve(0,0,k);

    return 0;
}
*/
/*
int n,m,k;
vector<int> a,b;
int dp[2005][2005][7];
int solve(int i,int j,int k){
    if(i==n || j==m){
        return 0;
    }
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    int c1(0),c2(0),c3(0);
    if(a[i]==b[j]) c1=1+solve(i+1,j+1,k);
    if(k>0) c2=1+solve(i+1,j+1,k-1);
    c3=max(solve(i+1,j,k),solve(i,j+1,k));
    return dp[i][j][k]=max({c1,c2,c3});
}
int32_t main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>m>>k;
    a=vector<int>(n);
    b=vector<int>(m);
    for(int &i:a){
        cin>>i;
    }
    for(auto &i:b){
        cin>>i;
    }
    cout<<solve(0,0,k);

    return 0;
}*/
