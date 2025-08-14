// 记忆化好题
#include <iostream>
using namespace std;
using ll = long long;
#define MOD 32767
const int N = 1000010;
int vis[N];
// ll f(int i)
// {
//     if(i == 1||i==2)return i;
//     // if(i == 2)return i;
//     return (2 * f(i-1) + f(i-2)) % MOD;
// }
// 但是这里直接超时
// 记忆化写法
ll f(int i)
{
    if (vis[i] != 0)return vis[i];
    return vis[i] = ((2 * f(i - 1) + f(i - 2))% MOD);
}
int main()
{
    ll n, t;
    cin >> t;
    vis[1] = 1;
    vis[2] = 2;
    for (int i = 1; i <= N; i++)
    {
        f(i);
    }
    while (t--)
    {
        cin >> n;
        cout << vis[n] << "\n";
    }
    return 0;
}