#include<iostream>
using namespace std;
const int N = 100010;
int a[N];

void insert_sort(int a[],int n)
{
    for(int i = 2;i <= n;i++)
    {
        int val = a[i];
        int p = i-1;//表示排好序的最大那个数的下标
        while(p >= 1 && a[p] > val)//val是指手上新拿出的那张牌,若小于当前排序最大那一个数，则需要将最大那个数往后移
        {
            a[p+1] = a[p];
            p--;//逐步向前查找合适的插入位置
        } 
        a[p+1] = val;//定好序后插入
    }
}
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++) cin>>a[i];
    insert_sort(a,n);
    for(int i = 1;i <= n;i++)cout<<a[i]<<" ";
    return 0;
}