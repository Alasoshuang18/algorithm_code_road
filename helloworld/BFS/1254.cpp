#include<bits/stdc++.h>
using namespace std;
const int N = 110;
char a[N][N];
bool vis[N][N];
int d[4][2] = {{0,-1},{-1,0},{1,0},{0,1}};
struct node
{
    int x,y,step;
}q[N * N];
int n,m;
void bfs(int x1,int y1)
{
    int hh = 1,tt = 1;
    q[tt].x = x1;
    q[tt].y = y1;
    q[tt].step = 0;
    vis[x1][y1] = 1;
    tt++;
    while(hh < tt)
    {
        int x2 = q[hh].x;
        int y2 = q[hh].y;
        int step1 = q[hh].step;
        if(a[x2][y2] == 'T')
        {
            cout<<step1<<"\n";
            return;
        }
        for(int i = 0;i < 4;i++)
        {
            int dx = x2 + d[i][0];
            int dy = y2 + d[i][1];
            if(dx >= 0 && dx < n && dy >= 0 && dy < m && a[dx][dy] != '#' && !vis[dx][dy])
            {
                vis[dx][dy] = 1;
                q[tt].x = dx;
                q[tt].y = dy;
                q[tt].step = step1 + 1;
                tt++;
            }
        }
        hh++;
    }
    cout<<-1<<"\n";
}
int main()
{
    int qix,qiy,zhongx,zhongy;
    cin>>n>>m;
    memset(vis,0,sizeof(vis));
    for(int i = 0;i < n;i++)cin>>a[i];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if(a[i][j] == 'S')
            {
                qix = i;
                qiy = j;
            }else if(a[i][j] == 'T')
            {
               zhongx = i;
               zhongy = j;
            }
        }
    }
    bfs(qix,qiy);
    
    return 0;
}