#include<iostream>
using namespace std;
using ll = long long;
ll f(ll a,ll b)
{
    if(a % b != 0)
    {
        return f(b,a % b);
    }else 
    {
        return b;
    }
}
int main()
{
    ll x,y;cin>>x>>y;
    cout<<f(x,y);
    return 0;
}