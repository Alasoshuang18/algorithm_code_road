#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 250;
vector<int> v[N];
bool vis[N];
void dfs(int x)
{
    cout<<x<<" ";
    vis[x] = 1;
    int len = v[x].size();
    for(int i = 0;i < len;i++)
    {
        if(!vis[v[x][i]])//v[x][i]表示当前这个节点的邻居
        {
            dfs(v[x][i]);
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    return 0;
}