#include<iostream>
using namespace std;
const int N = 1e5+10;
int a[N],b[N];
int n;
void merge_sort(int t[],int l,int r)
{
    if(l >= r)return;
    int mid = (l+r)>>1;
    merge_sort(t,l,mid);
    merge_sort(t,mid+1,r);

    int k = 0;//存放已经存下的数
    int i = l;
    int j = mid + 1;
    while(i <= mid && j <= r)
    {
        if(t[i] <= t[j]) b[k++] = t[i++];
        else b[k++] = t[j++];
    }
    //把剩余的加上
    while(i <= mid) b[k++] = t[i++];
    while(j <= r) b[k++] = t[j++];

    for(int i = l,j = 0;i <= r;i++,j++) t[i] = b[j];
}
int main()
{
    cin>>n;
    for(int i = 0;i < n;i++)cin>>a[i];
    merge_sort(a,0,n-1);
    for(int i = 0;i < n;i++)cout<<a[i]<<" ";
    return 0;
}