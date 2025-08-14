#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
ll a[N];
ll m, n;
int main()
{
    cin >> m >> n;
    ll x, sum = 0;
    for (int i = 1; i <= m; i++)cin >> a[i];
    sort(a + 1, a + 1 + m);
    while (n--)
    {
        cin >> x;
        ll l = 0, r = m+1,ans = 1e9;
        while (l+1!=r)
        {
            ll mid = (l + r) >> 1;
            if (a[mid] == x)
            {
                ans = 0;
                break;
            }
            else if (a[mid] > x)
            {
                ans = min(ans, abs(a[mid] - x));
                r = mid;
            }
            else
            {
                ans = min(ans, abs(a[mid] - x));
                l = mid;
            }
        }
        //检查l,r边界本身
        ans = min(ans,abs(a[l] - x));
        ans = min(ans,abs(a[r] - x));
        sum += ans;
    }
    cout << sum << "\n";
    return 0;
}