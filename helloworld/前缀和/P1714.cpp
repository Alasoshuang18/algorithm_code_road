#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+10;
int a[N],Pre[N];
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m;cin>>n>>m;
    int maxx = 0,ans = INT_MIN,l,r;
    for(int i = 1;i <= n;i++)cin>>a[i];
    //初始化前缀和
    for(int i = 1;i <= n;i++)
    {
        Pre[i] = Pre[i-1] + a[i];
    }

    for(int l = 1;l <= n;l++)//枚举左边界
    {
        for(int r = 1;r <= n && r-l+1 <= m;r++)
        {
            ans = max(ans,Pre[r] - Pre[l-1]);
        }
    }
    cout<<ans<<"\n";
    return 0;
}