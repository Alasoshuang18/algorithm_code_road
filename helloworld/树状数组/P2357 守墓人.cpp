#include<iostream>
using namespace std;
using ll = long long;
const int N = 2e5+10;
ll a[N],t[N],T1[N],T2[N];
int n,f;
ll lowbit(ll x)
{
    return x & -x;
}
void update(int k,ll x)
{
    for(ll i = k;i <= n;i += lowbit(i))
    {
        //t[i] += x;
        T1[i] += x;
        T2[i] += k * x;
    }
}

// ll Prefix1(int k)
// {
//     ll ans1 = 0;
//     for(int i = k;i > 0;i -= lowbit(i))
//     {
//         ans1 += t[i];
//     }
//     return ans1;
// }
ll Prefix(int k)
{
    ll ans2 = 0;
    for(int i = k;i > 0;i -= lowbit(i))
    {
        ans2 += (k+1) * T1[i] - T2[i];
    }
    return ans2;
}

ll search1(int l,int r)
{
    return Prefix(r) - Prefix(l-1);
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n>>f;
    ll pre = 0,a;
    for(int i = 1;i <= n;i++)
    {
        cin>>a;
        ll diff = a - pre;
        update(i,diff);
        pre = a;
    }
    while(f--)
    {
        int op;cin>>op;
        if(op == 1)
        {
            int l,r,k;cin>>l>>r>>k;
            update(l,k);
            if(r + 1 <= n) update(r+1,-k);
        }
        else if(op == 2)
        {
            int v;cin>>v;
            update(1,v);
             //注意此处是相当于[1,n]区间都加上了v,得把剩余的减去(还原)
            update(2,-v);
        }
        else if(op == 3)
        {
            int v;cin>>v;
            update(1,-v);
            //注意此处是相当于[1,n]区间都减去了v,得把剩余的加上(还原)
            update(2,v);
        }
        else if(op == 4)
        {
            int l,r;cin>>l>>r;
            cout<<search1(l,r)<<"\n";
        }
        else if(op == 5)
        {
            cout<<search1(1,1)<<"\n";
        }
    }
    return 0;
}