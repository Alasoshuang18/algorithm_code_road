#include<bits/stdc++.h>
using namespace std;
const int N = 15;
int n,a[N];
bitset<N> vis;
void dfs(int step)
{
    if(step == n+1)
    {
        for(int i = 1;i <= n;i++)
        {
            cout<<setw(5)<<a[i];
        }
        cout<<"\n";
        return;
    }
    for(int i = 1;i <= n;i++)
    {
        if(!vis[i])
        {
            vis[i] = true;
            a[step] = i;

            dfs(step+1);
            vis[i] = false;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);

    return 0;
}