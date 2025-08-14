#include <iostream>
#include <deque>
using namespace std;
const int N = 2e6 + 10;
deque<int> deq;
int a[N];
int main()
{
    // 求单调递减的单调队列
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << 0 << "\n";
    for (int i = 2; i <= n; i++) // 从 2 开始遍历这个数组
    {
        while (!deq.empty() && a[deq.back()] > a[i - 1]) // 这里的思路是队尾与前一个数作比较
        {
            deq.pop_back();
        }
        deq.push_back(i - 1);                       // 把比较完的更优这个元素下标放进来
        while (!deq.empty() && deq.front() < i - m) // 现在的区间是 ??? ~ i-1 (给定区间长度为 m)
        {
            deq.pop_front();
        }
        cout<<a[deq.front()]<<"\n";
    }

    return 0;
}