#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5+10;
ll a[N],t[N];//把树状数组t[N]初始化为0
ll d1[N],dit[N];
ll n,q;
int lowbit(int x)
{
    return x & -x;
}

void update(int k,ll x)
{
    for(int i = k;i <= n;i += lowbit(i)) d1[i] += x,dit[i] += k * x;
}

ll Prefix(int k)
{
    ll ans = 0;
    for(int i = k;i > 0;i -= lowbit(i)) ans += (k+1) * d1[i] - dit[i];
    return ans;
}
int main()
{
    cin>>n>>q;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++) update(i,a[i]),update(i+1,-a[i]);

    while(q--)
    {
        int op;cin>>op;
        if(op == 1)
        {
            ll k,o,v;cin>>k>>o>>v;
            update(k,v),update(o+1,-v);
        }
        else if(op == 2)
        {
            ll l,r;cin>>l>>r;
            cout<< Prefix(r) - Prefix(l-1) << "\n";
        }
    }

    return 0;
}