// 以系统数作为遍历对象
// 分为能找到和未能找到 两种情况
// 如果不能找到，那就再开一个系统，将当前导弹高度作为最大拦截高度
// 如果能找到，就拦截当前导弹，把导弹高度更新为当前拦截高度的最大值
#include <bits/stdc++.h>
using namespace std;
const int N = 1100;
int a[N]; // 表示系统的数量
int main()
{
    int x, n, p = 0; // x表示导弹的高度,p表示系统的下标
    int k = 0;       // 表示数组中有多少个系统
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        p = -1;
        for (int j = 1; j <= k; j++)
        {
            if (a[j] > x)
            {
                p = j;
                break;
            }
        }

        if (p == -1)
        {
            k++;
            a[k] = x; // 设定系统能拦截的最高高度
        }
        else
        {
            a[p] = x;
        }
    }

    cout << k << "\n";
    return 0;
}