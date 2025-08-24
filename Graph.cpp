///Vector
/*
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }///1 2 3
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }///1 2 3
    for(auto element:v){
        cout<<element<<endl;
    }/// 1 2 3
    v.pop_back(); ///1 2
    vector<int> v2(3,50);/// 50 50 50
    swap(v,v2);
    for(auto element:v){
        cout<<element<<endl;
    }
    vector<int>::iterator it2;
    for(it2=v2.begin();it2!=v2.end();it2++){
        cout<<*it2<<endl;
    }
    sort(v2.begin(),v2.end());
    return 0;
}
*/
///std::pair
//#include<iostream>
//using namespace std;
//int main()
//{
//    pair<int,char> p;
//    p.first=3;
//    p.second='f';
//
//    return 0;
//}
///Sort index given vlaue  4 7 2 6 1 0 5 3
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool myCompare(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}
int main()
{
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>> v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        ///pair<int,int> p;
        ///p.first=arr[i];
        ///p.second=i;
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),myCompare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
///adjacency matrix
/*
7 7
1 2
1 3
2 4
2 5
2 6
2 7
3 7
#include"bits/stdc++.h"
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) bulitin_popcount(x)
const int n=1e5+2,MOD=1e9+7;
signed main()
{
    int n,m;
    cin>>n>>m;
    vvi adjm(n+1,vi(n+1,0));
    rep(i,0,m){
    int x,y;
    cin>>x>>y;
    adjm[x][y]=adjm[y][x]=1;
    }
    cout<<"adjacency matrix of above graph is given by : "<<endl;
    rep(i,1,n+1){
        rep(j,1,n+1){
        cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/
///adjacency matrix
/*
const int n=1e5+2,MOD=1e9+7;
vi adj[n];
signed main()
{
    int n,m;
    cin>>n>>m;
    rep(i,0,m){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"adjacency list of the above graph is given by : "<<endl;
    rep(i,1,n+1){
        cout<<i<<"->";
        vector<int> ::iterator it;
        for(it=adj[i].begin();it!=adj[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }


    return 0;
}
*/
///BFS  1 2 3 4 5 6 7
/*
#include<bits/stdc++.h>
using namespace std;
const int n=1e5+2;
bool vis[n];
vector<int> adj[n];
int main()
{
    for(int i=0;i<n;i++){
        vis[i]=0;
    }
    int n,m;
    cin>>n>>m;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    vis[1]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<endl;
        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it);
            }
        }
    }


    return 0;
}
*/
///DFS
/*
7 7
1 2
1 3
2 4
2 5
2 6
2 7
3 7
#include<bits/stdc++.h>
using namespace std;
const int n=1e5+2;
bool vis[n];
vector<int> adj[n];
void dfs(int node){
    vis[node]=1;
    //preorder  1 2 4 5 6 7 3
    cout<<node<<" ";
    vector<int>:: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);
        }
    }
    //postorder  4 5 6 3 7 2 1
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        vis[i]=false;
    }
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);


    return 0;
}
*/
///Topological Sort
/*
#include"bits/stdc++.h"
using namespace std;
int32_t main()
{
    int n,m;
    int cnt=0;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int> indeg(n,0);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    for(auto i=0;i<n;i++){
        if(indeg[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        cnt++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto it: adj[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
    }

    return 0;
}
*/
///Cycle Detection in undirected graph
/*
#include<bits/stdc++.h>
using namespace std;
bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &visited,int parent){
    visited[src]=true;
    for(auto i:adj[src]){
        if(visited[i] && i!=parent){
            return true;
        }
        if(!visited[i] && iscycle(i,adj,visited,src)){
            return true;
        }
    }
    return false;
}
int32_t main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool cycle=false;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i] && iscycle(i,adj,visited,-1)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";
    }

    return 0;
}
*/
///Cycle Detection in directed graph
/*
#include<bits/stdc++.h>
using namespace std;
bool isCycle(int src,vector<vector<int>> &adj,vector<bool> &visited,vector<int> &Stack){
    Stack[src]=true;
    visited[src]=true;
    for(auto i : adj[src]){
        if(Stack[i]){
            return true;
        }
        if(!visited[i] && isCycle(i,adj,visited,Stack)){
            return true;
        }
    }
    Stack[src]=false;
    return false;
}
int32_t main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    bool cycle=false;
    vector<int> Stack(n,0);
    vector<bool> visited(n,0);
    for(int i=0;i<n;i++){
        if(!visited[i] && isCycle(i,adj,visited,Stack)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Cycle is not present"<<endl;
    }


    return 0;
}
*/
///Connected components
/*
#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
int n,m;
vector<vector<int>> adj;
vector<int> components;
int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx]=true;
    int ans=1;
    for(auto i:adj[idx]){
        if(!vis[i]){
            ans+=get_comp(i);
            vis[i]=true;
        }
    }
    return ans;
}
int32_t main()
{
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }
    for(auto i:components){
        cout<<i<<" ";
    }

    return 0;
}*/
///Another similar question
/*
#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
int n,m;
vector<vector<int>> adj;
vector<int> components;
int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx]=true;
    int ans=1;
    for(auto i:adj[idx]){
        if(!vis[i]){
            ans+=get_comp(i);
            vis[i]=true;
        }
    }
    return ans;
}
int32_t main()
{
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            components.push_back(get_comp(i));
        }
    }
    long long ans=0;
    for(auto i:components){
        ans+=i*(n-i);
    }
    cout<<ans/2<<endl;

    return 0;
}*/
///Bipartite Graph
/*
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;
bool bipart;
void color(int u,int curr){
    if(col[u]!=-1 && col[u]!=curr){
        bipart=false;
        return;
    }
    col[u]=curr;
    if(vis[u]) return;
    vis[u]=true;
    for(auto i:adj[u]){
        color(i,curr^1);
    }
}
int32_t main()
{
    bipart=true;
    int n,m;
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,false);
    col=vector<int>(n,-1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            color(i,0);
        }
    }
    if(bipart){
        cout<<"Graph is Bipartite"<<endl;
    }
    else{
        cout<<"Graph is not Bipartite"<<endl;
    }

    return 0;
}*/
///Disjoint set union(union find)
///Naive implementation O(N)
/*
void make(int v){
    parent[v]=v;
}
int find_set(int v){
    if(v==parent[v]) return v;
    return find_set(parent[v]);
}
void union_sets(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        parent[b]=a;
    }
}*/
///Path Compression O(Log N)
/*
int find_set(int v){
    if(v==parent[v]) return v;
    return parent[v]=find_set(parent[v]);
}*/
///Union by Size/Rank O(alfa(N))
///Union By size
/*
void make(int v){
    parent[v]=v;
    Size[v]=1;
}
int find_set(int v){
    if(v==parent[v]) return v;
    return find_set(parent[v]);
}
void union_sets(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(Size[a]<Size[b]){
            swap(a,b);
        }
        parent[b]=a;
        Size[a]+=Size[b];
    }
}*/
///Cycle Detection in a Undirected Graph Using DSU
/*
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+6;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v){
    if(v==parent[v]) return v;
    return parent[v]=find_set(parent[v]);
}
void union_sets(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
int32_t main()
{
    for(int i=0;i<N;i++){
        make_set(i);
    }
    int n,m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        edges.push_back({u,v});
    }
    bool cycle=false;
    for(auto i:edges){
        int u=i[0];
        int v=i[1];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y){
            cycle=true;
        }
        else{
            union_sets(u,v);
        }
    }
    if(cycle){
        cout<<"Cycle is present"<<endl;
    }
    else{
        cout<<"Does not contain a cycle"<<endl;
    }


    return 0;
}*/
///Kruskal's Algorithm
/*
8 9         7 8
1 2 5       8 5
2 3 6       4 3
4 3 2       1 2
1 4 9       3 5
3 5 5       2 3
5 6 10      6 7
6 7 7       27
7 8 1
8 5 1

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+6;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}
void union_sets(int a,int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}
int32_t main()
{
    for(int i=0;i<N;i++){
        make_set(i);
    }
    int n,m;
    cin>>n>>m;
    vector<vector<int>> edge;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edge.push_back({w,u,v});
    }
    sort(edge.begin(),edge.end());
    int cost=0;
    for(auto i:edge){
        int w=i[0];
        int u=i[1];
        int v=i[2];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y){
            continue;
        }
        else{
            cout<<u<<" "<<v<<endl;
            cost+=w;
            union_sets(u,v);
        }
    }
    cout<<cost<<endl;


    return 0;
}
*/
///Prims Algorithm
/*
4 5
0 1 10
1 2 15
0 2 5
3 1 2
3 2 40

0 0 0
2 0 5
1 0 10
3 1 2
17
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1e5+3;
vector<vector<int>> g[N];
int cost=0;
const int INF=1e9;
vector<int> dist(N),parent(N);
vector<bool> vis(N);
void primsMST(int sourse){
    for(int i=0;i<n;i++){
        dist[i]=INF;
    }
    set<vector<int>> s;
    dist[sourse]=0;
    s.insert({0,sourse});
    //{wt,vertex}
    while(!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        vis[x[1]]=true;
        int u=x[1];
        int v=parent[x[1]];
        int w=x[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost+=w;
        for(auto it:g[x[1]]){
            if(vis[it[0]])
                continue;
            if(dist[it[0]]>it[1]){
                s.erase({dist[it[0]],it[0]});
                dist[it[0]]=it[1];
                s.insert({dist[it[0]],it[0]});
                parent[it[0]]=x[1];
            }
        }
    }
}
int32_t main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    primsMST(0);
    cout<<cost<<endl;


    return 0;
}
*/
///Dijkstra's Algorithm
/*
4 4
1 2 24
1 4 20
3 1 3
4 3 12
1
Output : 0 24 3
*/
/*
#include<bits/stdc++.h>
using namespace std;
const int inf=1e7;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> dist(n+1,inf);
    vector<vector<pair<int,int>>> graph(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    int source;cin>>source;
    dist[source]=0;
    set<pair<int,int>> s;
    s.insert({0,source});
    while(!s.empty()){
        auto x=*(s.begin());
        s.erase(x);
        for(auto it:graph[x.second]){
            if(dist[it.first]>dist[x.second]+it.second){
                s.erase({dist[it.first],it.first});
                dist[it.first]=dist[x.second]+it.second;
                s.insert({dist[it.first],it.first});
            }
        }
    }
    for(int i=1;i<n;i++){
        if(dist[i]<inf){
            cout<<dist[i]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }

    return 0;
}
*/
///Bellman Ford
/*
5 8
1 2 3
3 2 5
1 3 2
3 1 1
1 4 2
0 2 4
4 3 -3
0 1 -1
0
Output:
0 -1 2 -2 1
*/
/*
#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main()
{
    int n,m;cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int src;cin>>src;
    vector<int> dist(n,INF);
    dist[src]=0;
    for(int iter=0;iter<n-1;iter++){
        for(auto e:edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            dist[v]=min(dist[v],w+dist[u]);
        }
    }
    for(auto i:dist){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
*/
///Floyd Warshall
/*
#include"bits/stdc++.h"
using namespace std;
const int INF=1e9;
int main()
{
    vector<vector<int>> graph={{0,5,INF,10},
                               {INF,0,3,INF},
                               {INF,INF,0,1},
                               {INF,INF,INF,0}
                               };
    int n=graph.size();
    vector<vector<int>> dist=graph;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dist[i][j]==INF){
                cout<<"INF ";
            }
            else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    ///1,3
    cout<<dist[1][3]<<endl;

    return 0;
}
*/
///Kosaraju's Algorithm
/*
test 1:
5 5
0 2
2 1
1 0
0 3
3 4
Output:
0 1 2
3
4
test 2:
6 7
0 1
1 2
2 0
1 4
3 4
4 5
5 3
Output:
0 2 1
4 3 5
*/
/*
#include<bits/stdc++.h>
using namespace std;
void topSort(vector<vector<int>> &graph,int curr,vector<bool> &vis,stack<int> &st){
    vis[curr]=true;
    for(auto i:graph[curr]){
        if(!vis[i]){
            topSort(graph,i,vis,st);
        }
    }
    st.push(curr);
}
void dfs(vector<vector<int>> &graph,int curr,vector<bool> &vis){
    vis[curr]=true;
    cout<<curr<<" ";
    for(auto i:graph[curr]){
        if(!vis[i]){
            dfs(graph,i,vis);
        }
    }
}
void KosarajuAlgo(vector<vector<int>> &graph,int V){
    ///step 1
    stack<int> st;
    vector<bool> vis(V);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            topSort(graph,i,vis,st);
        }
    }
    ///step 2
    vector<vector<int>> transpose(V);
    for(int i=0;i<graph.size();i++){
        vis[i]=false;
    }
    for(int i=0;i<V;i++){
        for(auto j:graph[i]){
            transpose[j].push_back(i);
        }
    }
    ///step 3
    while(!st.empty()){
        int curr=st.top();
        st.pop();
        if(!vis[curr]){
            dfs(transpose,curr,vis);
            cout<<endl;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }
    KosarajuAlgo(graph,n);

    return 0;
}
*/
///Tarjan"s Algorithm (bridge in graph)
/*
6 7
0 1
1 2
2 0
0 3
3 5
3 4
4 5
Output: bridge is : 0---3
*/
/*
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &graph,int curr,vector<bool> &vis,int dt[],int low[],int time,int parent){
    vis[curr]=true;
    dt[curr]=low[curr]=++time;
    for(auto i:graph[curr]){
        if(i==parent){
            continue;
        }
        else if(!vis[i]){
            dfs(graph,i,vis,dt,low,time,curr);
            low[curr]=min(low[curr],low[i]);
            if(dt[curr]<low[i]){
                cout<<"bridge is : "<<curr<<"---"<<i<<endl;
            }
        }
        else{
            low[curr]=min(low[curr],dt[i]);
        }
    }
}
void getBridge(vector<vector<int>> &graph,int V){
    int dt[V],low[V],time=0;
    vector<bool> vis(V);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(graph,i,vis,dt,low,time,-1);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    getBridge(graph,n);

    return 0;
}
*/
///Articulation point
/*
5 5
0 2
0 1
2 1
0 3
3 4
Output:
AP : 0
AP : 3
*/
/*
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &graph,int curr,int parent,int dt[],int low[],vector<bool> &vis,int time,vector<bool> &ap){
    vis[curr]=true;
    dt[curr]=low[curr]=++time;
    int children=0;
    for(auto i:graph[curr]){
        if(parent==i){
            continue;
        }
        else if(vis[i]){
            low[curr]=min(low[curr],dt[i]);
        }
        else{
            dfs(graph,i,curr,dt,low,vis,time,ap);
            low[curr]=min(low[curr],low[i]);
            if(dt[curr]<=low[i] && parent!=-1){
                ap[curr]=true;
            }
            children++;
        }
    }
    if(parent==-1 && children>1){
        ap[curr]=true;
    }
}
void getAp(vector<vector<int>> &graph,int V){
    int dt[V],low[V],time=0;
    vector<bool> vis(V),ap(V);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(graph,i,-1,dt,low,vis,time,ap);
        }
    }
    for(int i=0;i<V;i++){
        if(ap[i]){
            cout<<"AP : "<<i<<endl;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> graph(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    getAp(graph,n);

    return 0;
}
*/
///Snakes and ladders
/*
2
3 90
56 76
3
99 10
30 20
20 5
Output:
3
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ladders,snakes;
    cin>>ladders;
    map<int,int> lad,snak;
    for(int i=0;i<ladders;i++){
        int u,v;cin>>u>>v;
        lad[u]=v;
    }
    cin>>snakes;
    for(int i=0;i<snakes;i++){
        int u,v;cin>>u>>v;
        snak[u]=v;
    }
    int moves=0;
    queue<int> q;
    q.push(1);
    bool found=false;
    vector<int> vis(101,0);
    vis[1]=true;
    while(!q.empty() && !found){
        int sz=q.size();
        while(sz--){
            int t=q.front();
            q.pop();
            for(int die=1;die<=6;die++){
                if(t+die==100){
                    found=true;
                }
                if(t+die<=100 && lad[t+die] && !vis[lad[t+die]]){
                    vis[lad[t+die]]=true;
                    if(lad[t+die]==100){
                        found=true;
                    }
                    q.push(lad[t+die]);
                }
                else if(t+die<=100 && snak[t+die] and !vis[snak[t+die]]){
                    vis[snak[t+die]]=true;
                    if(snak[t+die]==100){
                        found=true;
                    }
                    q.push(snak[t+die]);
                }
                else if(t+die<=100 && !vis[t+die] && !snak[t+die] && !lad[t+die]){
                    vis[t+die]=true;
                    q.push(t+die);
                }
            }
        }
        moves++;
    }
    if(found)
        cout<<moves;
    else{
        cout<<-1;

    }

    return 0;
}
*/
///Surrounded Regions
/*
#include<bits/stdc++.h>
using namespace std;
void change(vector<vector<char>> &A,int x, int y){
    A[x][y]='*';
    int dx[]={0,0,-1,1};
    int dy[]={1,-1,0,0};
    for(int i=0;i<4;i++){
        int cx=x+dx[i];
        int cy=y+dy[i];
        if(cx>=0 && cx<A.size()&& cy>=0 && cy<A[0].size() && A[cx][cy]=='O'){
            change(A,cx,cy);
        }
    }
}
int32_t main()
{
    int n,m;cin>>n>>m;
    vector<vector<char>> A(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==n-1 || j==0 || j==m-1){
                if(A[i][j]=='O'){
                    change(A,i,j);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='O'){
                A[i][j]='X';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='*'){
                A[i][j]='O';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
*/



