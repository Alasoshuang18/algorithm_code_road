//Code Here.//默认大根堆
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

priority_queue<ll> pq;
/*
struct cmp
{
    bool operator()(const ll &u,const ll &v)const
    {
        return u>v;
    }
}
*/
//小根堆写法
//priority_queue<ll,vector<ll>,cmp>pq;
//或者
//priority_queue<ll,vector<ll>,greater<ll> >pq;
int main()
{
   ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll q;cin>>q;
    ll sum = 0;
    char op[2];
    while(q--)
    {
        cin>>op;
        if(op[0] == '1')
        {
            ll x;
            cin>>x;
            pq.push(x);
            sum += x;
        }else if(op[0] == '2' && pq.size())
        {
            sum -= pq.top();
            pq.pop(); 
        }
    }
    cout<<sum<<"\n";
    return 0;
}