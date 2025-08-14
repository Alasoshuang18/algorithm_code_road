//暴力O(n^3) 72pts
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1100;
// int a[N],b[N],c[N];

// int main()
// {
//     int n;cin>>n;
//     int cnt = 0;
//     for(int i = 1;i <= n;i++)cin>>a[i];
//     for(int i = 1;i <= n;i++)cin>>b[i];
//     for(int i = 1;i <= n;i++)cin>>c[i];
//     for(int i = 1;i <= n;i++)
//     {
//         for(int j = 1;j <= n;j++)
//         {
//             for(int z = 1;z <= n;z++)
//             {
//                 if(a[i] < b[j] && b[j] < c[z] ) cnt++;
//             }
//         }
//     }
//     cout<<cnt<<"\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
using ll = long long;
ll a[N],b[N],c[N];
ll n;
int bs1(int x)
{
    ll l = -1,r = n+1;
    while(l+1 != r)
    {
        ll mid = (l+r)>>1;
        if(a[mid] < x)
        {
            l = mid;
        }else 
        {
            r = mid;
        }
    }
    if(a[l] < x) return l;
    return 0;
}
int bs2(int x)
{
    ll l = -1,r = n+1;
    while(l+1 != r)
    {
        ll mid = (l+r)>>1;
        if(c[mid] <= x)
        {
            l = mid;
        }else 
        {
            r = mid;
        }
    }
    if(c[r] > x) return n-r+1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n;
    ll cnt = 0;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)cin>>b[i];
    for(int i = 1;i <= n;i++)cin>>c[i];
    //因为要二分a[i]和c[i],所以我们需要对其进行排序操作

    sort(a+1,a+1+n);
    sort(c+1,c+1+n);
    for(int i = 1;i <= n;i++)
    {
        ll x = bs1(b[i]);
        ll y = bs2(b[i]);
        cnt += x * y;//每个 a[j] 可以与每个 c[z] 组合
    }
    cout<<cnt<<"\n";
    return 0;
}