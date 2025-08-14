#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int w0, w, m;
bool check(double p)
{
    double s = 0;
    double t = (1 + p);
    for (int i = 1; i <= m; i++)
    {
        s += w / t;
        t *= (1 + p);
    }
    if (s <= w0)
        return true;
    else
        return false;
}
double erfenshishu(double l, double r)
{
    while (r - l >= 1e-5) // 因为是0.1% 换算过来就是 0.001(三位)
    {
        double mid = (l + r) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    return l;
}
int main()
{
    // int w0, w, m;
    scanf("%d%d%d", &w0, &w, &m);
    double l = 0, r = 10;
    double ans = erfenshishu(l, r);
    printf("%.1lf", ans * 100);
    return 0;
}