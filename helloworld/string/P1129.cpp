//与P1130思路差不多，都是讲数据存入字符串中，通过算术符号隔开相关数字，再转换成数字进行计算

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s,a,b,ans;
    cin>>s;
    //栈弹出
    s.pop_back();
    int p = s.find("*");
    a = s.substr(0,p);
    b = s.substr(p+1);
    ll num1 = stoi(a);
    ll num2 = stoi(b);
    ll sum = num1 * num2;
    ans = to_string(sum);
    cout<<sum<<"\n";
    return 0;
}