#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int dp[N];
int w[N],v[N];
int main()
{
    int n,m;cin>>n>>m;
    for(int i = 1;i <= n;i++)cin>>w[i]>>v[i];
    for(int i = 1;i <= n;i++)
    {
        for(int j = w[i];j <= m;j++)
        {
            if(w[i] > j)
            {
                dp[j] = dp[j-1];
            }else
            {
                dp[j] = max(dp[j-1],dp[j-w[i]] + v[i]);
            }
        }
    }
    cout<<dp[m];
    return 0;
}