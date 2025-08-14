#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int n,m,sum = 0,a[N];
int num[N];
bitset<N> vis;
void dfs(int step)
{
    if(sum == m+1)return;
    if(step == n + 1)
    {
        sum++;
        if(sum == m+1)
        {
            for(int i = 1;i <= n;i++)
            {
                cout<<num[i]<<" ";
            }
            return;
        } 
        return;
    }
       
        if(sum == 0)
        {
            for(int i = a[step];i <= n;i++)
            {
                if(!vis[i])
                {
                    vis[i] = true;
                    num[step] = i;

                    dfs(step+1);
                    vis[i] = false;
                }
            }
        }
        else 
        {
            for(int i = 1;i <= n;i++)
            {
                if(!vis[i])
                {
                    vis[i] = true;
                    num[step] = i;

                    dfs(step+1);
                    vis[i] = false;
                }
            }
        }
    }
int main()
{
    cin>>n>>m;
    for(int i = 1;i <= n;i++)cin>>a[i];
    dfs(1);

    return 0;
}