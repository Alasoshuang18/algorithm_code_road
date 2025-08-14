#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5+10;
int a[N],t[N];
int n,m;
int lowbit(int x)
{
    return x & -x;
}

void update(int k,int x)
{
    for(int i = k;i <= n;i += lowbit(i)) t[i] += x;
}

int Prefix(int k)
{
    ll res = 0;
    for(int i = k;i > 0;i -= lowbit(i)) res += t[i];
    return res;
}

int main()
{
    cin>>n>>m;  
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
        update(i,a[i]);
    }
    while(m--)
    {
        int op;
        cin>>op;
        if(op == 1)
        {
            int k,v;cin>>k>>v;
            update(k,v);
        }
        else if(op == 2)
        {
            int l,r;cin>>l>>r;
            cout<<Prefix(r) - Prefix(l-1)<<"\n";
        }
    }

    return 0; 
}