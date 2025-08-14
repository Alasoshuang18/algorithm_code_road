//暴力做法拿下 57pts
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int N = 1e4+10;
// ll a[N],Pre[N];
// ll n,m;
// int main()
// {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     cin>>n>>m;
//     for(int i = 1;i <= n;i++)cin>>a[i];
//     for(int i = 1;i <= n;i++) Pre[i] = Pre[i-1] + a[i];
//     ll maxx = 0,ans = 0;
//     for(int i = m;i <= n;i++)
//     {
//             ll sum = Pre[i] - Pre[i-m];
//             ll avr = sum * 1000 / m;
//             ans = max(ans,avr);
//     }

//     cout<<ans<<"\n";

//     return 0;
// }
//二分思路:二分所有的平均数
