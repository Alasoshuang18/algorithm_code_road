#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e6+10;
int dp[N];
int main()
{
    int n;cin>>n;
    int minn;
    for(int i = 1;i <= n;i++)
    {
        minn = 0x3f3f3f3f;
        if(i - 1 >= 0) minn = min(minn,dp[i-1]+1);
        if(i - 5 >= 0) minn = min(minn,dp[i-5]+1);
        if(i - 11 >= 0) minn = min(minn,dp[i-11]+1);
        dp[i] = minn;
    }
    cout<<dp[n];
    return 0;
}