#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int a[N][N],b[N],path[N],ans[N];//path记录当前搜索路径,ans记录答案路径
bitset<N> vis;
int n,len,maxx = 0,cnt = 0;
bool check(int x)//尝试往下挖到地雷
{
    for(int i = 1;i <= n;i++)
    {
        if(a[x][i] && !vis[i])return false;
    }
    return true;
}
void dfs(int start,int step,int sum)
{
    if(check(start))
    {
        if(maxx < sum)
        {
            maxx = sum;
            cnt = step;
            for(int i = 1;i <= step;i++)
            ans[i] = path[i];
        }
        return;
    }
    for(int i = 1;i <= n;i++)
    {
        if(a[start][i] && !vis[i])
        {
            vis[i] = 1;
            path[step + 1] = i;

            dfs(i,step+1,sum+b[i]);
            vis[i] = false;
        }
    }

}
int main()
{
    cin>>n;
    for(int i = 1;i <= n;i++)cin>>b[i];
    for(int i = 1;i <= n;i++)
    {
        for(int j = i+1;j <= n;j++)
        {
            cin>>a[i][j];
        }
    }
    //初始化做法
    for(int i = 1;i <= n;i++)
    {
        
        vis[i] = 1;
        path[1] = i;
        dfs(i,1,b[i]);
        //vis[i] = 0;
    }
    for(int i = 1;i <= cnt;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    cout<<maxx<<"\n";
    return 0;
}