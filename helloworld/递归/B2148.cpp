#include <iostream>
using namespace std;
double x, n;
double f(int i)//返回类型需设置为 double 才有机会保证精度
{
    if (i == 1)return x / (1 + x);
    return x / (i + f(i - 1));
}
int main()
{
    scanf("%lf%lf", &x, &n);
    printf("%.2lf", f(n));
    return 0;
}