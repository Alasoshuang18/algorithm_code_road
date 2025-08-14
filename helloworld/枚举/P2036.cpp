#include<iostream>
#include<cstdio>
#include<bitset>
#include<algorithm>
#include<cmath>
using namespace std;
const int N = 15;
bitset<N> vis;
int s[N],b[N];
int n,sum1 = 1,sum2 = 0,ans = 0x3f3f3f3f;//sum1表示乘积，sum2 表示求和
void dfs(int step)
{
    if(step > n)
    {
        return;
    }else 
    {
        for(int i = 1;i <= n;i++)
        {
            if(!vis[i])
            {
                sum1 *= s[i];
                sum2 += b[i];
                
                vis[i] = true;
                ans = min(ans,abs(sum1-sum2));

                dfs(step+1);
                sum1 /= s[i];
                sum2 -= b[i];
                vis[i] = false;
            }  
        }
    }
}
int main()
{
    cin>>n;
    for(int i = 1;i <= n;i++)cin>>s[i]>>b[i];

    dfs(1);
    cout<<ans<<"\n";
    return 0;
}
