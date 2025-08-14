#include<iostream>
#include<algorithm>
using namespace std;
const int MOD = 1e9+7;
const int N = 5e3+10;
using ll = long long;
ll num[N],maxx = 0,minn = 0x3f3f3f3f,ans;
int main()
{
    ll n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        ll l;cin>>l;
        num[l]++;
        maxx = max(maxx,l);
        minn = min(minn,l);
    }
    //找对应能组成三角形的组别
    for(int i = minn+1;i <= maxx;i++)
    {
        if(num[i] >= 2)
        {
            for(int j = minn;j <= i / 2;j++)
            {
                if(j != i-j)
                {
                    ans += (num[i] * (num[i] - 1) / 2) % MOD * (num[j] * num[i - j]) % MOD;
                }
                else if(j == i-j && num[j] >= 2)
                {
                    ans += (num[i] * (num[i] - 1) / 2) % MOD * (num[j] * (num[j] - 1) / 2) % MOD;
                }
            }
            ans %= MOD;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
