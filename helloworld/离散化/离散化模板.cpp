#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5+10;
vector<int> LS;
ll a[N];
struct operation1
{
    int p;
    int q;
}op[N],asked[N];

ll getindex(ll x)
{
    return lower_bound(LS.begin(),LS.end(),x) - LS.begin() + 1;
}
int main()
{
    ll n,q;cin>>n>>q;
    //初始化相关操作和询问
    for(int i = 1;i <= n;i++)
    {
        int x,w;cin>>x>>w;
        LS.push_back(x);
        op[i] = {x,w};
    }

    for(int i = 1;i <= q;i++)
    {
        int l,r;cin>>l>>r;
        LS.push_back(l),LS.push_back(r);
        asked[i] = {l,r};
    }
    //排序去重
    sort(LS.begin(),LS.end());
    LS.erase(unique(LS.begin(),LS.end()),LS.end());

    for(int i = 1;i <= n;i++)
    {
        ll u = getindex(op[i].p);
        ll v = op[i].q;
        a[u] += v;
    }
    //做前缀和
    for(int i = 1;i <= LS.size();i++)a[i] += a[i-1];
    for(int i = 1;i <= q;i++)
    {
        ll l = getindex(asked[i].p);
        ll r = getindex(asked[i].q);
        cout<< a[r] - a[l-1]<<"\n";
    }
   
    return 0;
}