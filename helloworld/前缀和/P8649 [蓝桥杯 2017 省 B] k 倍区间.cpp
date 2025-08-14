#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+10;
ll a[N],Pre[N];
ll cnt[N];
//int l[N],r[N];
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n,k,ans = 0;cin>>n>>k;
    memset(cnt,0,sizeof(cnt));
    for(int i = 1;i <= n;i++)cin>>a[i];

    for(int i = 1;i <= n;i++)
    {
        Pre[i] = Pre[i-1] + a[i];
        ll tmp = Pre[i] % k; 
        cnt[tmp]++;//桶思想
    //     if(l[tmp] == 0) l[i] = i;
    //     else if(i < l[tmp]) l[i] = i;
    //     if(i > r[tmp]) r[tmp] = i;
    // }

    }
    for(int i = 0;i < k;i++)
    {
        //if(r[0]) cnt = r[0];
        ans += (cnt[i] * (cnt[i]-1)) / 2;
       
    }
    cout<<ans + cnt[0]<<"\n";//cnt[0]表示是k的倍数的情况,需要把它一起加上
    return 0;
}