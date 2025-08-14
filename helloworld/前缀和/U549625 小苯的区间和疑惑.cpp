//思路:要想求区间的最大值，也就是Pre[r] - Pre[l-1]
//题目中说了,r是在i右边的数,所以我们可以定义为求r-n的后缀和;而l是小于i的也就是我们可以认为是1-l的前缀和
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+10;
ll a[N],Pre[N+1],Suf[N+2],Prefix[N];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n;cin>>n;
    for(ll i = 1;i <= n;i++)cin>>a[i];

    for(ll i = 1;i <= n;i++)
    {
        Pre[i] = Pre[i-1] + a[i];
    }
    Prefix[0] = 0;//前缀和起点
    //求1-l的前缀和
    for(ll i = 1;i <= n;i++)
    {
        Prefix[i] = min(Prefix[i-1],Pre[i]);
    }
    Suf[n+1] = LLONG_MIN;//注意改了全部变量用ll，最小值也需要用ll存
    for(ll i = n;i > 0;i--)
    {
        Suf[i] = max(Suf[i+1],Pre[i]);
    }
    for(ll i = 1;i <= n;i++)
    {
        cout<<Suf[i] - Prefix[i-1]<<" ";
    }
    return 0;
}