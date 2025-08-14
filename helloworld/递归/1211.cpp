#include <iostream>
using namespace std;
const int N = 100002;
int vis[N];
int k, x;
bool f(int y)
{
    if (y > x)
        return 0;
    if (y == x)
        return 1;
    // if(vis[y] != -1) return vis[y];
    return f(2 * y + 1) || f(3 * y + 1);
    // vis[y] = res;
}
int main()
{
    // ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    // int k,x;
    // for(int i = 0;i < N;i++)vis[i] = -1;
    scanf("%d,%d", &k, &x); // 一定要看题，有逗号输入
    if (f(k))
        printf("YES\n"); // 从k开始递归判断 x 是否是集合 M 的元素
    else
        printf("NO\n");
    return 0;
}