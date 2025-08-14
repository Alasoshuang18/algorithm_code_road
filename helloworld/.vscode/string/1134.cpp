//我的思路是直接比较第 i 个和 第n-i个字符的大小，如果不满足计数器++
//但是我貌似忽略了一个问题，是奇数的情况下，不可能会有结果！比如ABA就不满足题目条件了
/* 
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
const int N = 105;
char a[N];
int main()
{
    int cnt = 0;
    cin>>a;
    int len = strlen(a);
    for(int i = 0;i < len;i++)
    {
        for(int j = n-i;j > len;j++)
        {
            if(a[i] != a[j])cnt++;
            else break;
        }
        
    }
    cout<<cnt;

    return 0;
} */

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
//判断主要是1.回文数判断      2.奇偶数判断
bool panduan(string s,int x)
{
    bool flag = true;
    if((x+1) % 2 == 0)//因为下标从0开始的，所以长度是x+1
    {
        //判断回文
        for(int i = 0;i <= x / 2;i++)
        {
                if(s[i] != s[x-i])
                {
                    flag = false;
                    break;
                }
            }
    }else flag = false;


    return flag;
}
int main()
{
    string s;
    cin>>s;
    int endpoint = s.size()-1;
    while(panduan(s,endpoint))
    {
        endpoint /= 2;
    }
    cout<<endpoint+1;
    return 0;
}