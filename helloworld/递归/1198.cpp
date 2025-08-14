#include<iostream>
#include<string>
using namespace std;
double f()
{
    string s;cin>>s;
    switch (s[0])
    {
    case '+':
        return f() + f();//输入完符号后，继续递归得到下一层的数字
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
        return stod(s);//如果不是符号，即将字符串提取出数字
    }
}
int main()
{
    printf("%.6lf\n",f());
    return 0;
}