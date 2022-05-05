#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<int>&vis,vector<int>adj[])
{
cout<<node<<" ";
vis[node]=1;
for(auto it:adj[node])
{
if(!vis[it])
{
DFS(it,vis,adj);
}
}
}
int main()
{
int n,e;
cin>>n>>e;
int u,v;
vector<int>adj[n+1];
for(int i = 0 ;i < e ;i++)
{
cin>>u>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}
vector<int>vis(n+1,0);

for(int i = 1 ; i <=n ; i++)
{
if(!vis[i]) DFS(1,vis,adj);
}

}
