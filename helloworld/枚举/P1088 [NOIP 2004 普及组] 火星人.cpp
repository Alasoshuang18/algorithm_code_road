#include <iostream>
#include <bitset>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
ll a[N], ans[N];
int n, m, sum = 0;
bitset<N> vis;
void dfs(int step)
{
    if(sum == m+1)
        return;
    if (step == n + 1)
    {
        sum++;
        if (sum == m + 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << ans[i] << " ";
            }
            return;
        }
        return;
    }

    if (sum == 0)
    {
        for (int i = a[step]; i <= n; i++)
        {
            if (!vis[i])
            {
                vis[i] = true;
                ans[step] = i;

                dfs(step + 1);
                vis[i] = false;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                vis[i] = true;
                ans[step] = i;

                dfs(step + 1);
                vis[i] = false;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    dfs(1);
    return 0;
}