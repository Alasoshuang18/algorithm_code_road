#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int a[N];
int t,n;
int main()
{
    cin>>t;
    while(t--)
    {
        bool flag = true;
        cin>>n;
        for(int i = 1;i <= n;i++)cin>>a[i];

        for(int i = 2;i <= n;i++)//用这个去找相邻
        {
            if(abs(a[i] - a[i-1]) != 5 && abs(a[i] - a[i-1]) != 7)
            {
                flag = false;
                break;
            } 
        }
        if(flag)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    

    return 0;
}