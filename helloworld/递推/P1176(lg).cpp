// ���Ʋ���:���ߵ��ĸ���״̬��Ϊx,y
// ��ʱ������Ҫ��ԭ��һ����״̬,��������ǿ���һ��
// ������:(x-1,y) ������:(x,y-1)

#include <bits/stdc++.h>
using namespace std;
const int N = 1100;
int a[N][N];
void solve()
{
    int n, m;
    cin >> n >> m;
    int MOD = 100003;
    // ��ʼ���ϰ���״̬
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = -1;
    }
    a[1][1] = 1;//˵����ʱ�������û���ϰ�
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