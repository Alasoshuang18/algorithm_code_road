//主要是对根存在的分类讨论
//二分根在哪里
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
// const int N = 110;
double a, b, c, d;
double f(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
void erfen(double l, double r)
{
    if (r - l < 1e-5)
    {
        printf("%.2lf ", r);
        return;
    }
    double mid = (l + r) / 2;
    if (f(mid) == 0)
    {
        printf("%.2lf ", mid);
        return;
    }
    if (f(mid) * f(l) < 0)
        erfen(l, mid);
    else
        erfen(mid, r);
}
int main()
{
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    int cnt = 0;
    for (double i = -100; i <= 100, cnt != 3; i++)
    {
        // 找到一个区间i ~ i+1
        if (f(i) == 0)
        {
            printf("%.2lf ", i);
            cnt++;
        }
        if (f(i) * f(i + 1) < 0)
        {
            erfen(i, i + 1);
            cnt++;
        }
    }
    return 0;
}