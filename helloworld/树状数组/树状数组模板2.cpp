#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
const int N = 5e5+10;
ll a[N],T1[N],T2[N];//T1是推出来的式子中di,T2是推出来的式子中idi
int lowbit(int x)
{
    return x & -x;
}
void update(int k,ll x)
{
    for(int i = k;i <= n;i += lowbit(i))
    {
        T1[i] += x;
        T2[i] += k * x;
    }
}

ll Prefix(int k)
{
    ll ans = 0;
    for(int i = k;i > 0;i -= lowbit(i))
    {
        ans += (k+1) * T1[i] - T2[i]; 
    }
    return ans;
}
ll search1(int k)
{
    return Prefix(k) - Prefix(k-1);
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
        update(i,a[i]);
        update(i+1,-a[i]);
    }
    while(m--)
    {
        int op;cin>>op;
        if(op == 1)
        {
            int l,r,k;cin>>l>>r>>k;
            update(l,k);
            update(r+1,-k);
        }
        else if(op == 2)
        {
            int x;cin>>x;
            cout<<search1(x)<<"\n";
        }
    }

    return 0;
}