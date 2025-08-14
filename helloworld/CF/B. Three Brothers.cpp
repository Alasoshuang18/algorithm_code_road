#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        for(int i = 0;i < s.size();i++)
        {
            for(int j = i+1;j < s.size();j++)
            {
                if(s[i] == s[j])
                {
                    cout<<"No"<<"\n";
                }else cout<<"Yes"<<"\n";
            }
        }
    }
    return 0;
}