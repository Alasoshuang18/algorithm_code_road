#include<bits/stdc++.h>
using namespace std;
const int N = 420;
bitset<N> vis[N];
int dis[N][N];
int n,m;
int dx[8][2] = {{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1}};
int panduan(int x,int y)
{
    return x >= 1 && x <= n && y >= 1 && y <= m;
}
void bfs(int x1,int y1)
{
    queue<pair<int,int>> q;
    vis[x1][y1] = true;
    dis[x1][y1] = 0;
    q.push({x1,y1});
    while(!q.empty())
    {
       int hh = q.front().first;
        int tt = q.front().second;
        q.pop();
        for(int i = 0;i < 8;i++)
        {
            int xx = hh + dx[i][0];
            int yy = tt + dx[i][1];

            if(panduan(xx,yy) && !vis[xx][yy])
            {
                vis[xx][yy] = true;
                dis[xx][yy] = dis[hh][tt] + 1;
                q.push({xx,yy});
            }
        } 
    }
}
int main()
{
    int x,y;cin>>n>>m>>x>>y;
    memset(dis,-1,sizeof(dis));

    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
           vis[i][j] = false;
        }
    }
    bfs(x,y);
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            printf("%-5d",dis[i][j]);
        }
        cout<<"\n";
    }
    
    return 0;
}