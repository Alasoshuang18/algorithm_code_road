#include<iostream>
using namespace std;
using ll = long long;
const int N = 500010;
ll a[N],tmp[N];
ll ans = 0;
void merge(int l,int mid,int r)
{
    //定义指针
    int i = l,j = mid + 1,k = l;
    while(i <= mid && j <= r)
    {
        if(a[i] <= a[j]) tmp[k++] = a[i++];
        else 
        {
            tmp[k++] = a[j++];
            //ans += mid - i + 1;
        }
    }
    //将剩余元素复位
    while(i <= mid)tmp[k++] = a[i++];
    while(j <= r) tmp[k++] = a[j++];
    for(int i = l;i <= r;i++)a[i] = tmp[i];
}
void merge_sort(int left1,int right1)
{
    if(left1 >= right1)return;
    int mid1 = (left1 + right1) >> 1;
    merge_sort(left1,mid1);
    merge_sort(mid1 + 1,right1);
    merge(left1,mid1,right1);
}
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    merge_sort(1,n);
    for(int i = 1;i <= n;i++)cout<<a[i]<<" ";
    //cout<<ans<<"\n";
    return 0;
}