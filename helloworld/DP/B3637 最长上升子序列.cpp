#include<bits/stdc++.h>
using namespace std;
const int N = 5050;
int a[N],dp[N];
//dp[i]用来记录第a[i]个最长上升子序列的最长长度
int main()
{
    int n;cin>>n;
    int maxx = 0;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        dp[i] = 1;
        for(int j = 1;j < i;j++)
        {
            if(a[i] > a[j]) dp[i] = max(dp[i],dp[j]+1);
        }
        maxx = max(maxx,dp[i]);
    }
    cout<<maxx<<"\n";

    return 0;
}