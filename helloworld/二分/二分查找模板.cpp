#include<iostream>
using namespace std;
using ll = long long;
const int N = 1e6+10;
ll a[N],n,m;
int check(int x)
{
    int l = 1,r = n + 1;
    while(l < r)
    {
        int mid = l + ((r-l)>>1);
        if(a[mid] >= x)r = mid;
        else l = mid+1;
    }
    if(a[l] == x)return l;
    else return -1;
    // µÝ¹éÐ´·¨
    // if(a[l] == x)return l;
    // if(l >= r)return -1;
    // int mid = (l+r)>>1;
    // if(a[mid] >= x)return check(x,l,mid);
    // else return check(x,mid+1,r);

}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //int n,m,q;
    ll q;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)cin>>a[i];
    while(m--)
    {
        cin>>q;
        ll ans = check(q);
        cout<<ans<<" ";
    }
    return 0;
}