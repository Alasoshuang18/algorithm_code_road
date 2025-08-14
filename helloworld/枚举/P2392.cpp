#include<iostream>
#include<cstdio>
#include<algorithm>
#include <climits>
using namespace std;
int xueke[5],times[5][22];
int minn,l,r;
void dfs(int step,int dao)
{
    if(dao >= xueke[step])
    {
        minn = min(minn,max(l,r));
        return;
    }
    l += times[step][dao];
    dfs(step,dao+1);
    l -= times[step][dao];


    r += times[step][dao];
    dfs(step,dao+1);
    r -= times[step][dao];
}
int main()
{
    for(int i = 0;i < 4;i++)cin>>xueke[i];

    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < xueke[i];j++)
        {
            cin>>times[i][j];
        }
    }
    int ans = 0;
    for(int i = 0;i < 4;i++)
    {
        l = 0,r = 0;
        minn = 0x3f3f3f3f;
        dfs(i,0);
        ans += minn;
    }
    cout<<ans<<"\n";

    return 0;
}