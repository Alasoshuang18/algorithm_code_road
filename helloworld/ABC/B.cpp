#include<iostream>
using namespace std;
bool flag = false;
int main()
{
    int n;cin>>n;
    int cnt = 0;
    while(n--)
    {
        string s;cin>>s;
        if(s == "login")
        {
            flag = true;
        }else if(s == "logout")
        {
            flag = false;
        }else if(s == "private")
        {
            if(!flag)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";

    return 0;
}