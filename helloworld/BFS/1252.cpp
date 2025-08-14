#include<bits/stdc++.h>
using namespace std;
const int N = 45;
char a[N][N];
bool vis[N][N];
int d[4][2] = {{1,0},{-1,0},{0,-1},{0,1}};
struct node
{
   int x,y,step;
}q[N * N];
int r,c;
void bfs(int x2,int y2)
{
    int hh = 1,tt = 1;
    q[tt].x = x2;
    q[tt].y = y2;
    q[tt].step = 1;
    vis[x2][y2] = 1;
    tt++;
    while(hh < tt)
    {
        int headx = q[hh].x;
        int heady = q[hh].y;
        int step1 = q[hh].step;
        for(int i = 0;i < 4;i++)
        {
            int dx = headx + d[i][0];
            int dy = heady + d[i][1];
            if(dx == r - 1 && dy == c - 1)
            {
                cout << step1 + 1 << "\n";
                return;
            }
            else if(dx >= 0 && dx < r && dy >= 0 && dy < c && a[dx][dy] != '#' && !vis[dx][dy])
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
}
int main()
{
    cin>>r>>c;
    memset(vis,0,sizeof(vis));
    for(int i = 0;i < r;i++)cin>>a[i];
    bfs(0,0);
    return 0;
}