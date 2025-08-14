#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5+10;
int a[N],t[N];
vector<int> LS;

int binary(int x)
{
    return lower_bound(LS.begin(),LS.end(),x) - LS.begin() + 1;
}
int lowbit(int x)
{
    return x & -x;
}
//单点修改
void update(int k,int x)
{
    for(int i = k;i <= LS.size();i += lowbit(i)) t[i] += x;
}
int Prefix(int k)
{
    int res = 0;
    for(int i = k;i > 0;i -= lowbit(i)) res += t[i];
    return res;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    for(int i = 1;i <= n;i++) cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        LS.push_back(a[i]);
    }

    //默写 排序去重
    sort(LS.begin(),LS.end());
    LS.erase(unique(LS.begin(),LS.end()),LS.end());

    ll ans = 0;
    for(int i = 1;i <= n;i++)
    {
        int pos = binary(a[i]);
        ans += Prefix(LS.size()) - Prefix(pos);
        update(pos,1);
    }
    cout<<ans<<"\n";
    return 0;
}