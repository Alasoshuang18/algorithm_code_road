#include<iostream>
using namespace std;
int f(int n)
{
    int sum = 0;//������ͽ��
    if(n == 1)
    {
        sum = 1;
    }else 
    {
        sum = f(n-1) + 3;
    }
    return sum;//һ��Ҫ�ǵ÷��ؽ��!!
}
int main()
{
    //���ƹ�ʽ
    //f(n) = f(n-1) + 3;
    for(int i = 1;i <= 5;i++)
    {
        cout<<f(i)<<" ";
    }
    return 0;
}