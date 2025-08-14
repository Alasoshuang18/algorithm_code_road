#include<bits/stdc++.h>
using namespace std;
const int N = 25;
int a[N];
int n,t;
bool vis[N];
int main()
{
    cin>>t;
    while(t--)
    {
        int cnt = 0;
        memset(vis,0,sizeof (vis));
        cin>>n;
        for(int i = 1;i <= n;i++)cin>>a[i];
        
        sort(a+1,a+1+n);
        for(int i = 1;i <= n;i++)
        {
            if(vis[i]) continue;
            for(int j = i+1;j <= n;j++)
            {
                if(vis[j]) continue;
                if(a[i] == a[j]) 
                {
                    vis[i] = vis[j] = 1;
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<"\n";
    }
    //     for(int i = 1;i <= n;i++)
    //     {
    //         for(int j = n;j >= 1;j--)
    //         {
    //             if(a[i] != a[j])
    //             {
    //                 flag = false;
    //                 continue;
    //             }
    //         }
    //     }
    //     if(flag)
    //     {
    //         cnt ++;
    //     }
        
    // }
    return 0;
}