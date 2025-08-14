#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 1e6 + 10;
ll a[N];
ll m, n;
bool erfen(ll x)
{
    int l = 1, r = m;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (a[mid] == x)
            return true;
        else if (a[mid] > x)
            r = mid;
        else
            l = mid + 1;
    }
    if (a[l] == x)
        return true;
    else return false;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll k;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + m);
    while (n--)
    {
        cin >> k;

        if (erfen(k))
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }

    return 0;
}