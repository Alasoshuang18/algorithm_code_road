#include<iostream>
using namespace std;
int f(int n)
{
    int sum = 0;//储存求和结果
    if(n == 1)
    {
        sum = 1;
    }else 
    {
        sum = f(n-1) + 3;
    }
    return sum;//一定要记得返回结果!!
}
int main()
{
    //递推公式
    //f(n) = f(n-1) + 3;
    for(int i = 1;i <= 5;i++)
    {
        cout<<f(i)<<" ";
    }
    return 0;
}