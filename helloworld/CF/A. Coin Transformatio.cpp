#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        if(n <= 3)
        {
            cout<<1<<"\n";
            continue;
        }
        ll cnt = 1;
        while(n > 3)
        {
            ll x = n / 4;
            cnt *= 2;
            n = x;
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}