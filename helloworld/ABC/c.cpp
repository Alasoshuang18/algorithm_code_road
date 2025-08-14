#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+10;
const int MOD = 1e9;
ll a[N];
int main()
{
    ll n,k;cin>>n>>k;
    if (n < k) 
    {
        cout << 1 << "\n";
        return 0;
    }

    for(int i = 0;i < k;i++)a[i] = 1;
    ll sum = k;

    for(int i = k;i <= n;i++)
    {
        a[i] = sum % MOD;
        sum = (sum - a[i-k] + a[i]) % MOD;
    }
    if(sum < 0)
    {
        sum += MOD;
    }
    cout<<a[n]<<"\n";
    return 0;
}