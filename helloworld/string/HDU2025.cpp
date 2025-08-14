#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string maxx = "";
    //int cnt = 0;
    while(getline(cin,s))
    {
        //假设第一个字符就是最大的
        char maxx = s[0];
        for(int i = 1;i < s.size();i++)
        {
            if(maxx < s[i])maxx = s[i];
        }
    string s1 = "";
    for(int i = 0;i < s.size();i++)
    {
        s1 += s[i];
        if(s[i] == maxx)
        {
            s1 += "(max)";
        }
         
    }
        cout<<s1<<"\n";
    }
   
    return 0;
}