//字符串转整数,整数答案转字符串
//明白需要拆开把整数提取出来，但是不知道怎么处理其他算术运算符
//可以将冗余的算术符号一一去掉，以+为分界
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //去掉等号
    s.pop_back();
    string a,b;
    int p = s.find("+");
    a = s.substr(0,p);
    b = s.substr(p+1);

    int num1 = stoi(a);
    int num2 = stoi(b);
    int sum = num1 + num2;
    a = to_string(sum);
    cout<<sum<<"\n";
    return 0;
}