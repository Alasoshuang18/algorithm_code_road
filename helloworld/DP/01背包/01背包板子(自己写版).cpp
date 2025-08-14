#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e3+10;
int dp[N];
int w[N],v[N];
int main()
{
    int n,m;cin>>m>>n;
    for(int i = 1;i <= n;i++)cin>>w[i]>>v[i];
    for(int i = 1;i <= n;i++)
    {
        for(int j = m;j >= w[i];j--)
        {
            dp[j] = max(dp[j],dp[j-w[i]] + v[i]);
        }
    }
    cout<<dp[m]<<"\n";
    return 0;
}