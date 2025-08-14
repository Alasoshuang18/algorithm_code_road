//"输入 # 字符代表结束"这个居然正解里面没有管这个条件
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt1 = 0,cnt2 = 0,cnt3 = 0;
    for(int i = 0;i < s.size();i++)//忘记遍历字符串了
    {
        if(isupper(s[i]))cnt1++;
        if(islower(s[i]))cnt2++;
        if(isdigit(s[i]))cnt3++;
    }

    cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<"\n";
    
    return 0;
}