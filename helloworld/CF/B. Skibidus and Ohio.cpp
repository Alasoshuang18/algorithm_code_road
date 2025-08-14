#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int cnt = 0;//可以减少的字符数量
        bool flag = false;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == s[i+1])
            {
                flag = true;
                break;
            }
        }
       if(flag)
       {
        cout<<1<<"\n";
       }else cout<<s.size()<<"\n";
    }  
    return 0;
}