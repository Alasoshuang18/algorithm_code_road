#include<iostream>
using namespace std;
int n = 3;
void dfs(int x)//x表示节点
{
    if(x >= (1<<n)) return;
    cout<<x<<" ";//输出根节点(先序遍历)
    dfs(2 * x);
    dfs(2 * x + 1);
}
int main()
{
    dfs(1);

    return 0;
}