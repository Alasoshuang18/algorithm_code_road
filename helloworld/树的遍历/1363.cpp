#include<iostream>
using namespace std;
int d,I;//d表示深度,I表示你要走多少次
const int N = (1<<21);
int v[N];
int ans;
void dfs(int x)
{
    if(x >= (1<<(d-1)))
    {
        ans = x;
        return;
    }
    //如果没有超过对应 2 ^(d - 1),就需要判断v是否为true/false
    if(v[x] == false)
    {
        v[x] = true;
        dfs(2 * x);
    }else 
    {
        v[x] = false;
        dfs(2 * x + 1);
    }
}
int main()
{
    cin>>d>>I;
    for(int i = 1;i <= I;i++)
    {
        dfs(1);
    }
    cout<<ans<<"\n";

    return 0;
}