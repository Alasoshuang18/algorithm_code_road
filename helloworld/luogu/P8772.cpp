#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
using ll = long long;
const int N = 2e5+10;
ll a[N],Prefix[N];
int main()
{
    ll n,sum = 0;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        Prefix[i] = Prefix[i-1] + a[i];
    }

    for(int i = 2;i <= n;i++)//i这里从2开始计算是因为用第二个例子去乘第一个前缀和
    {
        sum =sum + a[i] * Prefix[i-1]; 
    }
    cout<<sum<<'\n';

    return 0;
}