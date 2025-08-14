#include <bits/stdc++.h>
using namespace std;
const int MOD = 100003;
const int N = 100010;
int rever[N];
int n, k;
int f(int i)
{
    int ans = 0;
    if (i == 0)
        return 1; // 地面到地面一种方式，就是不动
    if (i < 0)
        return 0; // 如果台阶为负，则没有方式到达
    if (rever[i] != -1)
        return rever[i];
    // if(i == 1)return 1;
    // if(i == 2)return 2;
    //这两种其实还没有考虑完全
    for (int j = 1; j <= k; j++)
    {
        ans = (ans + f(i - j)) % MOD;
    }
    rever[i] = ans;
    return ans;
}
int main()
{
    // int n,k;
    cin >> n >> k;
    memset(rever, -1, sizeof(rever));
    cout << f(n) << "\n";

    return 0;
}