#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int fa[N];
vector<int> g[N];
bitset<N> vis;
void bfs(int x)
{
    queue<int> q;
    q.push(x);
    
    while(!q.empty())
    {
        int hh = q.front();
        q.pop();
        vis[hh] = true;
        for(auto &i : g[hh])
        {
            if(vis[i]) continue;
            q.push(i);
        }
    }
}
    
int main()
{
    int n,m;cin>>n>>m;
    while(m--)
    {
        int u,v;cin>>u>>v;
        if(u ^ v)g[u].push_back(v);
    }
    bfs(1);
    for(int i = 1;i <= n;i++)
    {
        if(vis[i])cout<<i<<" ";
    }

    return 0;
}