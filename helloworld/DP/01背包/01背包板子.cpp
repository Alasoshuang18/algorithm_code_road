#include<bits/stdc++.h>
using namespace std;
const int N = 251;
int dp[N][N];
int w[N],v[N];
int main()
{
    int m,n;cin>>m>>n;
    for(int i = 1;i <= n;i++)cin>>w[i]>>v[i];

    for(int i = 1;i <= n;i++)
    {
        dp[i][0] = 0;//���б�����������ı���û����Ҳ��������ˮһ����
        for(int j = 1;j <= m;j++)
        {
           dp[0][j] = 0;//û�б������м�ֵ
           if(w[i] > j)
           {
                dp[i][j] = dp[i-1][j];
           }else 
           {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]] + v[i]);
           }
        }
    }
    cout<<dp[n][m]<<"\n";
    return 0;

}