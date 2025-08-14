// 快速排序要素提要:
// 选择基准数
// 递归排序左右两边
#include <iostream>
using namespace std;
const int N = 10010;
int a[N];
// void quick_sort(int *a,int l,int r)
// {
//     //递归处理
//     //寻找边界
//     if(l >= r)return;
//     int i = l+1,j = l+1;
//     while(j <= r)
//     {
//         if(a[j] < a[l])
//         {
//             swap(a[i],a[j]);
//             i++;
//         }
//         j++;
//     }
//     //更新基准数
//     swap(a[i-1],a[l]);
//     quick_sort(a,l,i-2);//递归左子树
//     //注意:i-1是他基准数自己的值
//     //所以i-2表示它左边的所有值
//     quick_sort(a,i,r);//递归右子树
// }
//优化版快速排序
void quick_sort(int *a, int l, int r)
{
    if (l >= r)
        return;
    int i = l, j = r;
    int tmp = a[l];
    while (i < j)
    {
        //处理右边界(如果处理左边界会导致a[j]的值被覆盖掉，原始数据被修改)
        while (i < j && a[j] >= tmp)--j;
        a[i] = a[j];
        // 处理左边界
        while (i < j && a[i] <= tmp)++i;
        a[j] = a[i];
    }
    a[i] = tmp;
    quick_sort(a,l,i-1);
    quick_sort(a,i+1,r);
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    quick_sort(a, 1, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}