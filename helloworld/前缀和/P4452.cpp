#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
using ll = long long;
ll a[N],d[N];
int main()
{
    ll n,p = 0,q = 0;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];

    for(int i = 2;i <= n;i++)//差分数组从第二个开始搜
    {
        d[i] = a[i] - a[i-1];
        if(d[i] > 0)
        {
            p += d[i];
        }else q -= d[i];
    }
    cout<<max(p,q)<<"\n";
    cout<<abs(p-q) + 1<<"\n";


    return 0;
}