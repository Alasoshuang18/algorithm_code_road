#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100;
int a[N];
int main()
{

    int n,x;
    cin>>n>>x;
    for(int i = 1;i <= n;i++)
    {
        if(i == x)
        {
            a[i] = 1;//青色块
        }else a[i] = 0;//红色
    }
    int cnt1 = 0;
    for(int i = x;i > 1;i--)
    {
        if(a[i] == 1)swap(a[i],a[i-1]);
        cnt1++;  
    }
    //重新初始化a数组
    for(int i = 1;i <= n;i++)
    {
        if(i == x)
        {
            a[i] = 1;
        }else a[i] = 0;
    }
    int cnt2 = 0;
    for(int i = x;i < n;i++)
    {
        if(a[i] == 1)swap(a[i],a[i+1]);
        cnt2++;
    } 
    cout<<min(cnt1,cnt2)<<"\n";
    return 0;    
}