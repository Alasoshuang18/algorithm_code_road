#include<iostream>
using namespace std;
// int f(int a,int b,int c)
// {
//     return a+b+c;
// }
int f(int a,int b = 10,int c = 20)
//形参默认值会被下列实参改变
//注意，写了默认值后，后边每一个都要写默认参数
{
    return a + b + c;
}
int main()
{
    cout<<f(10);

    return 0;
}