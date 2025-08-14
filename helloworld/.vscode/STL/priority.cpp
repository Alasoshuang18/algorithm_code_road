#include<iostream>
#include<queue>
#include<vector>
using namespace std;
using ll = long long;
const int N = 1e5+10;
void solve()
{
    int q;cin>>q;
    priority_queue<ll> pq;
    ll sum = 0;
    while(q--)
    {
        int op;cin>>op;
        if(op == 1)
        {
            ll x;cin>>x;
            pq.push(x);
            sum += x;
        }else if(pq.size())
        {
            sum -= pq.top();
            pq.pop();
        }
    }   
    cout<<sum<<"\n";
}
int main()
{
    int o;
    cin>>o;
    while(o--)
    {
        solve();
    }

    return 0;
}