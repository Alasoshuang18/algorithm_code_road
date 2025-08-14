#include<bits/stdc++.h>
using namespace std;
const int N = 60;
int fa[N];
vector<int> g[N];
void dfs(int x)
{
    cout<<x<<" ";
    for(auto &i : g[x])dfs(i);
}

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto &i : g[x])
        {
            q.push(i);
        }
    }
}
int main()
{
    int n;cin>>n;
    for(int i = 2;i <= n;i++)cin>>fa[i];
    for(int i = 2;i <= n;i++) g[fa[i]].push_back(i);

    for(int i = 1;i <= n;i++)sort(g[i].begin(),g[i].end());
    dfs(1);
    cout<<"\n";
    bfs(1);
    return 0;
}