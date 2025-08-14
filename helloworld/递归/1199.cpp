#include <iostream>
using namespace std;
const int N = 110;
char ans[N];  // 答案数组
bool vis[N]; // 标记数组
string s;
void dfs(int d)
{
    // 终止条件
    if (d == s.size() + 1)
    {
        for (int i = 1; i < d; i++)printf("%c", ans[i]);
        printf("\n");
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;    // 先标记
            ans[d] = s[i]; // 存答案
            dfs(d + 1);    // 走下一个
            vis[i] = 0;    // 回溯调整
        }
    }
}

int main()
{
    // string s;
    cin>>s;
    int len = s.size();
    dfs(1);
    return 0;
}