//照本宣科
#include<iostream>
using namespace std;
int n,x;
int f(int u,int v)//u表示n,v表示x
{
    if(u == 0) return 1;
    if(u == 1)return 2 * v;
    if(u > 1)return 2 * x * f(u-1,x) - 2 * (u-1) * f(u-2,v);
    return 0;
}
int main()
{
    cin>>n>>x;
    cout<<f(n,x);

    return 0;
}