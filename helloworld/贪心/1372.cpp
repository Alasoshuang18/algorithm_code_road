// 思路:尽可能选择结束时间较早的那一个
// 先对结束时间进行排序,将这个结束时间定为跟下一个开始时间对比的时间
// 如果开始时间大于当前时间则将结束时间更新为下一个比较时间
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int be[N], en[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> be[i] >> en[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (en[j] > en[j + 1])
            {
                swap(en[j], en[j + 1]);
                // 开始时间也跟着交换(联动交换)
                swap(be[j], be[j + 1]);
            }
        }
    }

    //     for(int i = 1;i <= n;i++)
    //     {
    //         cout<<be[i]<<" "<<en[i]<<"\n";
    //     }
    // }
    /*
    1 4
    3 5
    0 6
    5 7
    3 8
    5 9
    6 10
    8 11
    8 12
    2 13
    12 14
    */
    int end = en[1];
    int cnt = 1;                 // 因为你第一个方案已经选入进去了
    for (int i = 2; i <= n; i++) // 遍历2~n个活动
    {
        if (be[i] >= end)
        {
            end = en[i];
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}