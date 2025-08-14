//单调递增栈核心思想:若栈顶元素比当前元素要大,栈顶存进其他数组后弹出,当前栈顶更新为当前下标
#include<iostream>
#include<stack>
using namespace std;
const int N = 3e6+10;
int a[N],f[N];
stack<int> stk;
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        while(!stk.empty() && a[stk.top()] < a[i])
        {
            f[stk.top()] = i;//为什么这里不是a[i]?
            //记录“下一个更大元素”的位置，而不是它的值
            stk.pop();
        }
        stk.push(i);
    }
    while(!stk.empty())
    {
        f[stk.top()] = 0;
        //对应的f值设置为0，表示“没有下一个更大元素”。
        stk.pop();
    }
    for(int i = 1;i <= n;i++)cout<<f[i]<<" ";

    return 0;
}