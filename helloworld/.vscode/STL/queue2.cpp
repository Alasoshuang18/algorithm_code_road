#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        queue<int>b;
        queue<char>q;
        for(int i = 0;i < s.length();i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                b.push(s[i] - '0');
            }else if(s[i] >= 'a' && s[i] <= 'z')
            {
                q.push(s[i]);
            }
        }
            while(!b.empty())
            {
                cout<<b.front();
                b.pop();
            }

            cout<<"#";
            while(!q.empty())
            {
                cout<<q.front();
                q.pop();
            }
                cout<<"\n";
        }
    return 0;
}