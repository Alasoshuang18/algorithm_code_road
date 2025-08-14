#include <iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N], diff[N], prefix[N];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m, l, r, c;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        diff[i] = a[i] - a[i - 1];
    }
    while (m--)
    {
        cin >> l >> r >> c;
        diff[l] += c;
        diff[r + 1] -= c;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + diff[i];
        cout<<a[i]<<" ";
    }

    return 0;
}