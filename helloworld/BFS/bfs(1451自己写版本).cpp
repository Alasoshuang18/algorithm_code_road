#include <bits/stdc++.h>
using namespace std;
const int N = 110;
char a[N][N];
bool vis[N][N];
int n, m;
int d[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
struct node
{
    int x, y;
} q[N * N];
void bfs(int x1, int y1)
{
    int hh = 1, tt = 1;
    // �ѵ�ǰ��ӽ�ȥ
    q[hh].x = x1;
    q[hh].y = y1;
    tt++;
    vis[x1][y1] = 1;

    while (hh < tt)
    {
        // ȡ��(x,y)��ͷ
        int x2 = q[hh].x;
        int y2 = q[hh].y;
        // �ж��ķ�λ
        for (int i = 0; i < 4; i++)
        {
            int dx = x2 + d[i][0]; // ���º�����
            int dy = y2 + d[i][1]; // ����������
            if(dx >= 0 && dx < n && dy >= 0 && dy < m && a[dx][dy] != '0' && !vis[dx][dy])
            {
                q[tt].x = dx;
                q[tt].y = dy;
                vis[dx][dy] = 1;
                tt++;//�ӽ���֮���βҪ��λ�ó���
            }
        }
        hh++;
    }
}
int main()
{
    cin >> n >> m;
    int cnt = 0;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != '0' && !vis[i][j])
            {
                cnt++;
                vis[i][j] = 1;
                bfs(i, j);
            }
        }
    }
    cout << cnt << "\n";

    return 0;
}