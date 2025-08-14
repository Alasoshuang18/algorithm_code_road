#include<iostream>
using namespace std;
//子问题的递推公式
//f(i) = f(i-1) + f(i-2)
//终止条件:这里真的让我意想不到
//考虑最后两层即可，不是考虑 i > n 这个条件
int f(int i)
{
    if(i == 1)return 1;
    if(i == 2)return 2;
    return f(i-1) + f(i-2);
}
int main()
{
    int n;cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}