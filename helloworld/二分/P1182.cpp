#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
const int N = 1e5 + 10;
int a[N];
int n, m;
bool check(int x)
{
    int cnt = 1;
    ll sum = 0; // 1e5个1e8相加，会爆
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > x)
            return false;
        sum += a[i];
        if (sum > x)
        {
            cnt++;
            sum = a[i];
        }
    }
    if (cnt <= m)
        return true;
    else
        return false;
}
int erfenzuo(int l, int r)
{
    while (l + 1 != r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    return r;
}
int main()
{
    cin >> n >> m;
    int ans = 0;
    int l = 1e9, r;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        l = min(l, a[i]);
        ans += a[i];
    }
    r = ans;
    cout << erfenzuo(l, r) << "\n";

    return 0;
}