#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e6+10;
int a[N];
int n,k;
bool check(int x)
{
    int cnt = 0;
    for(int i = 1;i <= n;i++)
    {
        cnt += a[i] / x;
    }
    if(cnt >= k)return true;
    else return false;
}
int erfen(int l,int r)
{
    while(l < r)
    {
        int mid = (l+r+1) >> 1;
        if(check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}
int main()
{
    int sum = 0;
    cin>>n>>k;
    int l = 1,r = 0;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
        sum += a[i];
        r = max(r,a[i]);
    }
    int ans = erfen(l,r);
    if(!check(ans))
    {
        cout<<0<<"\n";
    }else cout<<ans<<"\n";
    return 0;
}