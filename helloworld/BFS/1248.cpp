#include <bits/stdc++.h>
using namespace std;
const int N = 50;
char a[N][N][N];
bool vis[N][N][N];
int d[6][3] = {{0, 0, 1}, {0, 0, -1}, {0, -1, 0}, {0, 1, 0}, {1, 0, 0}, {-1, 0, 0}};
struct node
{
    int x, y, z, step;
} q[N * N * N];
int l, r, C;
int bfs(int x1, int y1, int z1, int endx, int endy, int endz)
{
    int hh = 1, tt = 1;
    q[hh].x = x1;
    q[hh].y = y1;
    q[hh].z = z1;
    q[hh].step = 0;
    vis[x1][y1][z1] = 1;
    tt++;
    while (hh < tt)
    {
        int headx = q[hh].x;
        int heady = q[hh].y;
        int headz = q[hh].z;
        int step1 = q[hh].step;
        if (headx == endx && heady == endy && headz == endz)
        {
            return step1;
        }
        for (int i = 0; i < 6; i++)
        {
            int dx = headx + d[i][0];
            int dy = heady + d[i][1];
            int dz = headz + d[i][2];
            if (dx >= 0 && dx < l && dy >= 0 && dy < r && dz >= 0 && dz < C && a[dx][dy][dz] != '#' && !vis[dx][dy][dz])
            {
                q[tt].x = dx;
                q[tt].y = dy;
                q[tt].z = dz;
                q[tt].step = step1 + 1;
                vis[dx][dy][dz] = 1;
                tt++;
            }
        }
        hh++;
    }
    return -1;
}
int main()
{
    int x2,y2,z2,end1x,end2y,end3z;
    while (1)
    {
        cin >> l >> r >> C;
        if (l == 0 && r == 0 && C == 0) break;
        memset(vis, 0, sizeof(vis));
        memset(a,0,sizeof(a));
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < r; j++)
        {
            for (int z = 0; z < C; z++)
            {
                cin >> a[i][j][z];
                if(a[i][j][z] == 'S')
                {
                    //记录起点
                    x2 = i;
                    y2 = j;
                    z2 = z;
                }else if(a[i][j][z] == 'E')
                    {
                        //记录终点
                        end1x = i;
                        end2y = j;
                        end3z = z;
                    }
                }
            }
        }
        int res = bfs(x2,y2,z2,end1x,end2y,end3z);
        if (res != -1) {
            cout << "Escaped in " << res << " minute(s).\n";
        } else {
            cout << "Trapped!\n";
        }
    }
    return 0;
}