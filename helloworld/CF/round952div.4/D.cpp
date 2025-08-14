// 圆心 (h, k) 应该是所有 # 点的“几何中心”，即这些点的 x 坐标和 y 坐标的中位数
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 10;
ll x[N], y[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll cnt = 0; // 记录 "#"的个数
        for (int i = 1; i <= n; i++)
        {
            cin >> s;
            for (int j = 1; j <= m; j++)
            {
                if (s[j - 1] == '#')
                {
                    x[cnt] = i;
                    y[cnt] = j;
                    cnt += 1;
                }
            }
        }
        sort(x + 1, x + n + 1);
        sort(y + 1, y + n + 1);

        ll zhongx = x[cnt / 2];
        ll zhongy = y[cnt / 2];

        cout << zhongx << " " << zhongy << "\n";
    }
    return 0;
}