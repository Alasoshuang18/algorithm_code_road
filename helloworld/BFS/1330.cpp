#include <bits/stdc++.h>
using namespace std;
const int N = 110;
bool vis[N][N];
int a[N][N], cnt1 = 0, cnt2 = 0;
struct node
{
    int x, y, step;
} q[N * N];
int d[12][2] = {{-2, 2}, {-2, -2}, {2, -2}, {2, 2}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}};
int bfs1(int x3, int y3, int start1, int end1)
{
    memset(vis, 0, sizeof(vis));
    int hh = 1, tt = 1;
    q[tt].x = x3;
    q[tt].y = y3;
    q[tt].step = 0;
    vis[x3][y3] = 1;
    tt++;
    while (hh < tt)
    {
        // hh++;
        int fronx = q[hh].x;
        int frony = q[hh].y;
        int stepmin = q[hh].step;
        if (fronx == start1 && frony == end1)
        {
            return stepmin;
        }
        for (int i = 0; i < 12; i++)
        {
            int dx = fronx + d[i][0];
            int dy = frony + d[i][1];
            if (dx >= 0 && dx < 100 && dy >= 0 && dy < 100 && !vis[dx][dy])
            {
                q[tt].x = dx;
                q[tt].y = dy;
                q[tt].step = stepmin + 1; // 意思是走投无路的时候可以用上一个加一得到下一步
                vis[dx][dy] = 1;
                tt++;
            }
        }
        hh++;
    }
    return -1;
}
// int bfs2(int x2, int y2, int start2, int end2)
// {
//     memset(vis,0,sizeof(0));
//     int hh = 1, tt = 1;
//     q[tt].x = x2;
//     q[tt].y = y2;
//     vis[x2][y2] = 1;
//     tt++;
//     while (hh < tt)
//     {
//         int fronx2 = q[hh].x;
//         int frony2 = q[hh].y;
//         for(int i = 0;i < 12;i++)
//         {
//             int dx2 = fronx2 + d[i][0];
//             int dy2 = frony2 + d[i][1];
//             if(dx2 >= 0 && dx2 < 100 && dy2 >= 0 && dy2 < 100 && !vis[dx2][dy2] && dx2 == start2 && dy2 == end2)
//             {
//                 cnt2++;
//                 q[tt].x = dx2;
//                 q[tt].y = dy2;
//                 vis[dx2][dy2] = 1;
//                 tt++;
//             }
//         }
//         hh++;
//     }
//     return cnt2;
// }
int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    memset(vis, 0, sizeof(vis));
    cout << bfs1(x1, y1, 1, 1) << "\n";
    cout << bfs1(x2, y2, 1, 1) << "\n";

    return 0;
}