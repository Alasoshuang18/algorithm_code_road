//字符串拼接上字符o(错误想法，只想到只去拼接o)
//正确思路:全部都拼接一次
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;
    s.clear();
    s = "L";
    for(int i = 0;i < n;i++)
    {
        s += 'o';
    }
    s += 'n';
    s += 'g';
    cout<<s<<"\n";
    return 0;
}