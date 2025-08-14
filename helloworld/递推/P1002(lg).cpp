// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int N = 24;
// ll a[N][N], ma[N][N];
// void solve()
// {
//     int n, m, x, y;
//     cin >> n >> m >> x >> y;
//     a[0][0] = 1;
//     ma[x][y] = -1; // 标记马的坐标为障碍
//     if(x + 1 <= n && y + 2 <= m)ma[x + 1][y + 2] = -1;
//     if(x + 2 <= n && y + 1 <= m)ma[x + 2][y + 1] = -1;
//     if(x - 1 >= 0 && y + 2 <= m)ma[x - 1][y + 2] = -1;
//     if(x - 2 >= 0 && y + 1 <= m)ma[x - 2][y + 1] = -1; 
//     if(x - 2 >= 0 && y - 1 >= 0)ma[x - 2][y - 1] = -1;
//     if(x - 1 >= 0 && y - 2 >= 0)ma[x - 1][y - 2] = -1;
//     if(x + 1 <= n && y - 2 >= 0)ma[x + 1][y - 2] = -1;
//     if(x + 2 <= n && y - 2 >= 0)ma[x + 2][y - 1] = -1;

//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= m; j++)
//         {
//             if (i == 0 && j == 0)continue;//跳过起点
//             // 边界判断（从递推方程入手观察）
//             if (ma[i][j] == 0)
//             {
//                 a[i][j] += a[i - 1][j] + a[i][j - 1];
//             }
                
//         }
//     }
//     cout << max(a[n][m], 0LL) << "\n";
// }
// int main()
// {
//     ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//     int t = 1;
//     while (t--)
//         solve();
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
const int N = 25;
ll a[N][N];
int dx[8] = {1,1,-1,-1,2,2,-2,-2};
int dy[8] = {2,-2,2,-2,1,-1,1,-1};
int main()
{
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    a[0][0] = 1;
    a[x][y] = -1;
    for(int i = 0;i < 8;i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || ny < 0 || nx > n || ny > m)continue;
        a[nx][ny] = -1;
    }

    for(int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= m;j++)
        {
            if(a[i][j] == -1)continue;
            if(i - 1 >= 0)
                a[i][j] += max(a[i-1][j],0LL);
            if(j - 1 >= 0)
                a[i][j] += max(a[i][j-1],0LL);
        }
    }
    cout<<max(a[n][m],0LL)<<"\n";
    return 0;
}