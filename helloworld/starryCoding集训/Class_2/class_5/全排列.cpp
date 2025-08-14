//适合用dfs做
#include<bits/stdc++.h>
using namespace std;
const int N = 15;
int a[N];
bitset<N> vis;//剪枝操作
int n;
void dfs(int depth)
{
    if(depth == n+1)
    {
        for(int i = 1;i <= n;i++)printf("%5d",a[i]);
        cout<<"\n";
        return;//递归终止条件
    } 
    
    for(int i = 1;i <= n;i++)
    {
        if(vis[i]) continue;
        vis[i] = true;
        a[depth] = i;
        dfs(depth+1);
        //回溯
        a[depth] = 0;
        vis[i] = false;
    }


}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}