//思路:找出相同的字符计数器++
//但是注意有时候不止两个字符相同，也许有三个四个这样
//需要特判 字符串是否为空的情况！！！！
// #include<iostream>
// #include<cstdio>
// #include<cstring>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;
//     string ans;
//     int cnt = 1;//从1开始计数，至少有一个字符
//     if(s.empty())
//     {
//         return 0;
//     }
//     for(int i = 1;i < s.size();i++)
//     {
//         if(s[i] == s[i-1])cnt++;
//         else 
//         {
//             if(cnt > 1)
//             {
//                 ans += to_string(cnt) + s[i-1];
//             }else{
//                 ans += s[i-1];
//             }
//             cnt = 1;
//         }
//     }
//     //处理最后一个字符的情况
//     if(cnt > 1)
//     {
//         ans += to_string(cnt) + s[s.size()-1];
//     }else
//     {
//         ans += s[s.size() - 1];
//     }
//     cout<<ans<<"\n";
//     return 0;
// }


//计数器需清零的思想啊啊啊啊！！！

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0;i < s.size();i++)
    {
        cnt++;//是因为读入进去后就统计第一个字符了

        //判断连续结束的条件
        if(i == s.size() - 1 || s[i] != s[i+1])//注意:若写s[i] != s[i-1]在第一条件处，则会产生越界问题
        {
            if(cnt > 1)
            {
                cout<<cnt<<s[i];
            }else
            {
                cout<<s[i];
            }
            cnt = 0;
        }
    }
    return 0;
}