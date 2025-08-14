#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    bool flag = false;
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        for(int i = 0;i < s.size();i++)
        {
            if(s[i] == s[i-1]) 
            {
                char randonw;
                if(s[i-1] == 'a')
                {
                    randonw = 'b';
                }else randonw = 'a';
                s.insert(i,1,randonw);
                flag = true;
                break;
            }  
        }
        int len = s.size();
        if(!flag)
        {
            if(s.empty())
            {
                s += 'a';
            }else 
            {
                char ls = s.back();
                char zifu;
                if(ls == 'a')
                {
                    zifu = 'b';
                }else zifu = 'a';
                s += ls;
            }
        }
        cout<< s <<"\n";
    }
    

    return 0;
}