#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n,a;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int res = s[0] - '0';
        for(int i = 1;i < s.size();i++)
        {
            if(s[i] == '0')
            {
                cout<<'+';
            }
            else 
            {
                if(res > 0)
                {
                    cout<<'-';
                    res --;
                }
                else if(res < 0)
                {
                    cout<<'+';
                    res ++;
                }
                else 
                {
                    cout<<'+';
                    res++;
            }
        }
    }
    cout<<"\n";
}   
    return 0;
}