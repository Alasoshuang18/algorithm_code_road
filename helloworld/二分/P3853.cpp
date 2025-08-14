#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 1e7 + 10;
ll a[N];
ll l, n, k;
bool check(int x)
{
    // 检查在给定的“空旷指数”x下，是否可以通过插入最多k个路标满足条件
    // 求解段数
    ll cnt = 0;
    for (int i = 1; i < n; i++)
    {
        cnt += (a[i + 1] - a[i] - 1) / x;
    }
    // cnt += sum / x;
    // if((k + cnt) * x <= l)return true;
    if (cnt <= k)
        return true;
    else
        return false;
}
int erfenzuo(ll Lef, ll rig)
{
    while (Lef < rig)
    {
        ll mid = (Lef + rig) >> 1;
        if (check(mid))
            rig = mid;
        else
            Lef = mid + 1;
    }
    return Lef;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> l >> n >> k;
    // ll Left = 1,ri = l;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    ll Left = 1, ri = l;
    int ans = erfenzuo(Left, ri);
    cout << ans << "\n";
    return 0;
}