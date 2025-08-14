#include<bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N];
int main()
{
    int n,r;cin>>n>>r;
    int sum = 0,sum1 = 0;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    //遍历打水时间
    // for(int i = 1;i <= n;i++)
    // {
    //     if(i >= r + 1)//是因为前r个没必要等待，直接去对应的水龙头打水就行
    //     //因为有个sum，所以得把数据全部加上
    //     {
    //         a[i] += a[i-r];
    //     }
        
    //     sum += a[i];
    // }
    // cout<<sum<<"\n";
    for(int i = 1;i <= r;i++)
    {
        sum += a[i];
    }
    for(int i = r+1;i <= n;i++)
    {
        a[i] += a[i-r];
        sum1 += a[i];
    }
    cout<<sum+sum1<<"\n";
    return 0;
}