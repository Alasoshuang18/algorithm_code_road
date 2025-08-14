#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 1e6 + 10;
ll h[N];
ll n, m;
bool check(int mid)
{
    ll sum = 0;
    for (int i = 1; i <= n; i++) // ö������ľ��
    {
        if (h[i] > mid) // �˲�����Ҫ����Ҫ�жϸ�ľ���Ƿ������� ������������߶� H
        {
            sum += h[i] - mid;
        }
    }
    if (sum >= m)
        return true;
    else
        return false;
}
int erfenyou(int l, int r)
{
    while (l<r)
    {
        int mid = (l + r + 1) >> 1;
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    return r;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    ll l = 0, r = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
        r = max(r, h[i]);
    }
    ll ans = erfenyou(l, r);
    cout << ans << "\n";

    return 0;
}