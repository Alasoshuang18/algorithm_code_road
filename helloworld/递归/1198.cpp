#include<iostream>
#include<string>
using namespace std;
double f()
{
    string s;cin>>s;
    switch (s[0])
    {
    case '+':
        return f() + f();//��������ź󣬼����ݹ�õ���һ�������
        break;
    case '-':
        return f() - f();
        break;
    case '*':
        return f() * f();
        break;
    case '/':
        return f() / f();
        break;

    default:
        return stod(s);//������Ƿ��ţ������ַ�����ȡ������
    }
}
int main()
{
    printf("%.6lf\n",f());
    return 0;
}