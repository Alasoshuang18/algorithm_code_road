#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int a[N][N],dis[N][N];//dis[N][N]���ڱ����̾���
int dx[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
int n,m;
bitset<N> vis[N];
int panduan(int x1,int y1)
{
    return x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m;
}
void bfs(int x,int y)
{
    queue<pair<int,int> > q;
    vis[x][y] = true;
    dis[x][y] = 0;// ��㵽����ľ���Ϊ0
    q.push({x,y});
    while(!q.empty())
    {
        int hh = q.front().first,tt = q.front().second;
        q.pop();
        for(int i = 0;i < 4;i++)
        {
            int xx = hh + dx[i][0];
            int yy = tt + dx[i][1];

            if(panduan(xx,yy) && !a[xx][yy] && !vis[xx][yy])
            {
                vis[xx][yy] = true;
                dis[xx][yy] = dis[hh][tt] + 1;//�������Ϊ����һ��ֵ������һ�����·
                q.push({xx,yy});
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    memset(dis,0x3f3f3f3f,sizeof (dis));
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>a[i][j];
        }
    }
    //dx[1][1] = 0;
    bfs(1,1);
    if(vis[n][m])
    {
        cout<<dis[n][m]<<"\n";
    }else 
    {
        cout<<-1<<"\n";
    }
    
    return 0;
}