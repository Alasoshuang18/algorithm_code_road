#include <iostream>
using namespace std;
double x, n;
double f(int i)//��������������Ϊ double ���л��ᱣ֤����
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