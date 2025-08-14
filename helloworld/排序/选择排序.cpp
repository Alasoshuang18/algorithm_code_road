//选择排序的思路:在序列里面找到一个最值，然后把它排到序列中
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 10010;
int a[N];
void choose_sort(int a[],int n)
{
    for(int i = 1;i < n;i++)//注意这里不需要 遍历到 n
    {
        int p = i;
        for(int j = i + 1;j <= n;j++)
        {
            if(a[j] < a[p])
            {
                p = j;
            }
            //这里更新它的下标即可
        }
        swap(a[i],a[p]);
    }
    
}
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    choose_sort(a,n);
    for(int i = 1;i <= n;i++)cout<<a[i]<<" ";
    return 0;
}