//��P1130˼·��࣬���ǽ����ݴ����ַ����У�ͨ���������Ÿ���������֣���ת�������ֽ��м���

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
    //ջ����
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