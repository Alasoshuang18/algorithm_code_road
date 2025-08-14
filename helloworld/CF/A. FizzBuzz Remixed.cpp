#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt = 0;
        for(int i = 0;i <= n;i++)
        {
            int mod_3 = i % 3;
            int mod_5 = i % 5;
            if(mod_3 == mod_5)cnt++;
        }
        cout<<cnt<<"\n";
    } 
    return 0;
}