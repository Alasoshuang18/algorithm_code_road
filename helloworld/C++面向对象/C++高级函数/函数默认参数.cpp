#include<iostream>
using namespace std;
// int f(int a,int b,int c)
// {
//     return a+b+c;
// }
int f(int a,int b = 10,int c = 20)
//�β�Ĭ��ֵ�ᱻ����ʵ�θı�
//ע�⣬д��Ĭ��ֵ�󣬺��ÿһ����ҪдĬ�ϲ���
{
    return a + b + c;
}
int main()
{
    cout<<f(10);

    return 0;
}