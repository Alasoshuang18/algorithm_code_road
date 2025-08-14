#include<iostream>
using namespace std;
const int N = 1e5+10;
int a[N];
void quick_sort(int t[],int l,int r)
{
    if(l >= r)return;
    int x = t[l+r>>1],i = l-1,j = r + 1;
    while(i < j)
    {
        do i++;while(t[i] < x);
        do j--;while(t[j] > x);
        if(i < j)swap(t[i],t[j]);
    }
        quick_sort(t,l,j);
        quick_sort(t,j+1,r);
}
int main()
{
    int n;cin>>n;
    for(int i = 0;i < n;i++)cin>>a[i];

        quick_sort(a,0,n-1);

    for(int i = 0;i < n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}