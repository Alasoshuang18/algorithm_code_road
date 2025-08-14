#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int fa[N];
vector<int> g[N];
bitset<N> vis;//当作bool数组就行
void dfs(int x)
{
    vis[x] = true;
    for(auto &i : g[x])
    {
        if(vis[i])continue;
        dfs(i);
    }
}
int main()
{
    int n,m;cin>>n>>m;

    for(int i = 1;i <= m;i++)
    {
        int u,v;cin>>u>>v;
        if(u ^ v)g[u].push_back(v);
    }
    dfs(1);
    for(int i = 1;i <= n;i++)
    {
        if(vis[i])cout<<i<<" ";
    }
    return 0;
}