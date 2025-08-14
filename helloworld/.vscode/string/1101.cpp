#include<iostream>
#include<cstring>
using namespace std;
int sum(string s)
{
    int h,m,S;
    h = (s[0] * 10 - '0') + (s[1] - '0');
    m = (s[3] * 10 - '0') + (s[4] - '0');
    S = (s[6] * 10 - '0') + (s[7] - '0');
    int sum = 3600 * h + 60 * m + S;
    return sum;
}
int main()
{
    string s1,s2;
    //int sum = s[0] * 10 + s[1]; 这个算出来会是字符类型的
    cin>>s1>>s2;
    cout<<sum(s1) - sum(s2);
    return 0;
}