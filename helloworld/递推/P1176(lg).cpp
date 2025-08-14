// 递推策略:把走到的格子状态设为x,y
// 此时我们需要还原上一步的状态,递推嘛，就是看上一步
// 向上走:(x-1,y) 向左走:(x,y-1)

#include <bits/stdc++.h>
using namespace std;
const int N = 1100;
int a[N][N];
void solve()
{
    int n, m;
    cin >> n >> m;
    int MOD = 100003;
    // 初始化障碍的状态
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = -1;
    }
    a[1][1] = 1;//说明此时起点这里没有障碍
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == -1)continue;
                
            a[i][j] += (max(0, a[i-1][j]) % MOD + max(0, a[i][j-1]) % MOD) % MOD;
            a[i][j] %= MOD;
        }
    }
    cout << a[n][n] % MOD << "\n";
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        solve();
    return 0;
}