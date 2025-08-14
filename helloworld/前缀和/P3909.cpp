//完全暴力 30 - 40pts
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int N = 1e6+10;
// const int MOD = 1e9+7;
// int a[N];
// int main()
// {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     int n;cin>>n;
//     ll ans = 0;
//     for(int i = 1;i <= n;i++)cin>>a[i];

//     for(ll i = 1;i <= n;i++)
//     {
//         for(ll j = i+1;j <= n;j++)
//         {
//             for(ll k = j + 1;k <= n;k++)
//             {
//                 ans = (ans + 6 * a[i] % MOD * a[j] % MOD * a[k] % MOD) % MOD;
//             }
//         }
//     }
//     cout<<ans % MOD<<"\n";
//     return 0;
// }

//O(n ^ 2)优化 50pts
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int N = 5100;
// const int MOD = 1e9+7;
// ll a[N],Pre[N];
// int main()
// {
//     ll n;cin>>n;
//     ll ans = 0;
//     for(ll i = 1;i <= n;i++)cin>>a[i];
//     for(ll i = 1;i <= n;i++) 
//     {
//         Pre[i] = (Pre[i-1] + a[i]) % MOD; 
//     }

//     for(ll i = 1;i <= n;i++)
//     {
//         for(int j = i + 1;j <= n;j++)
//         {
//             ans = ans + (6 * a[i] % MOD * a[j] % MOD * (Pre[n] - Pre[j]) % MOD) % MOD;
//         }
//     }
//     cout<<ans % MOD<<"\n";
//     return 0;
// }

//O(n)优化 100pts
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+10;
const int MOD = 1e9+7;
ll a[N],Pre[N];
int main()
{
    ll n;cin>>n;
    ll ans = 0;
    ll sum = 0;//数组开始到当前元素的累加和
    ll sum1 = 0;//存储前缀和的平方
    for(ll i = 1;i <= n;i++)cin>>a[i];
    for(ll i = 1;i <= n;i++)
    {
        //更新前缀和的值
        ans = (ans + sum1 * a[i] % MOD) % MOD;
        sum1 = (sum1 + sum * a[i] % MOD) % MOD;
        sum = (sum + a[i]) % MOD;
        
       
    }
    ans = (ans * 6) % MOD;
    cout<<ans % MOD<<"\n";
    return 0;
}