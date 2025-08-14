#include<bits/stdc++.h>
using namespace std;
const int N = 55;
int a[N],b[N],c[N];
int n,m;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        for(int i = 1;i <= n;i++)
        {
            cin>>a[i];
        }
        for(int i = 1;i <= n;i++)
        {
            cin>>b[i];
        }
        sort(a+1,a+1+n);
        //for(int i = 1;i <= n;i++)cout<<a[i]<<" ";
        for(int i = 1;i <= n;i++)
        {
            c[i] = a[i] + b[i];
        }
        int cnt = 1;
        for(int j = 2;j <= n;j++)
        {
            if(c[j] != c[j-1])cnt++;
        }
        if(cnt >= 3)
        {
            cout<<"YES"<<"\n";
        }else cout<<"NO"<<"\n";


        // for(int i = 1;i <= n;i++)
        // {
        //     cout<<c[i]<<" ";
        // }

    }
    
    return 0;
}