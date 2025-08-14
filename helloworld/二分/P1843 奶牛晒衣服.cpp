#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 5e5 + 10;
int w[N];
int n, a, b;
bool check(int x)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (w[i] - a * x <= 0)
            continue;
        // 这里是因为先用自然烘干，然后再用烘干机烘干如果能烘干就进行下一步操作
        int time = ceil((w[i] - a * x) * 1.0 / b); // 注意:此处会有除为小数的可能
        sum += time;
    }
    if (sum <= x)
        return true;
    else
        return false;
}
int erfenzuo(int l, int r)
{
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }

    return l;
}
int main()
{
    cin >> n >> a >> b;
    int l = 0, r = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
        r = max(r, w[i]);
    }
    r = r / a + 1; // 求最大时间,+1是因为可能有小数,从而缩小了它的范围
    int ans = erfenzuo(l, r);
    cout << ans << "\n";
    return 0;
}