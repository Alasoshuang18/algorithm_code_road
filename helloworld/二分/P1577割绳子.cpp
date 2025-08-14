// 实数类型的二分
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 1e5 + 10;
double L[N];
int n, k;
bool check(double x) // x表示每段绳子的长度
{
    int cnt = 0; // 记录可以切割的段数
    for (int i = 1; i <= n; i++)
    {
        cnt += int(L[i] / x);
    }
    if (cnt >= k)
        return true;
    else
        return false;
}
double erfenyou(double l, double r)
{
    while (r - l >= 1e-5)//1e-5是增加小数点精度
    {
        double mid = (l + r) / 2;
        if (check(mid))
            l = mid;
        else
            r = mid;
    }
    return r;
}
int main()
{
    scanf("%d%d", &n, &k);
    double l = 0, r = 0; // l , r表示需要查找的长度，不是段数
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf", &L[i]);
        r = max(r, L[i]);
    }
    double res = erfenyou(l, r);
    printf("%.2lf", int((res + 1e-5) * 100) / 100.0);//double 会四舍五入

    return 0;
}