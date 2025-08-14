#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+10;
ll a[N];
ll n,k;
bool check(int mid,int k)//长度为mid，段数为k
{
    int cnt = 0;
    for(int i = 1;i <= n;i++)
    {
        cnt += a[i] / mid;
    }
    if(cnt >= k)return true;
    else return false;
}
int main()
{
    cin>>n>>k;
    ll sum = 0;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        sum += a[i];
    }
    if(sum < k)cout<<0<<"\n";
    else //需要二分之前先对木材进行排序
    {
        sort(a+1,a+1+n);
        ll l = -1,r = 1e8+10;
        while(l+1 != r)
        {
            ll mid = (l+r) >> 1;
            if(check(mid,k))
            {
                l = mid;
            }
            else r = mid;
        }
        cout<<l<<"\n";
    }
    return 0;
}