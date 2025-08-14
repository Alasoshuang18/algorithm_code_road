#include<bits/stdc++.h>
using namespace std;
const int N = 1e8+10;
int a[N];
bitset<N> vis;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,q;cin>>n>>q;
    memset(a,0,sizeof(a));
    vis[0] = vis[1] = 1;
    int k = 0;
    for(int i = 2;i <= n;i++)
    {
        if(!vis[i])
        {
            a[++k] = i;
        }
            for(int j = 1;j <= k;j++)
            {
                if(i * a[j] > n)break;
                vis[i * a[j]] = 1;
                if(i % a[j] == 0)break;
            }
    }
    while(q--)
    {
        int l;cin>>l;
        cout<<a[l]<<"\n";
    }


    return 0;
}