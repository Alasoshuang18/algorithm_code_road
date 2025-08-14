//考虑a[i]是否满足k个子集中
//1.a[i]不满足
//n < k || k == 0 f(n,k) = 0
// n == k || k == 0  f(n,k) = 1

//2.a[i]满足
//a[i] 在 k 个 子集中 ，那么就可以往前推 f(n-1,k-1)
//a[i] 不在第 k 个子集中 那么还是可以推出上一个 f(n-1,k)
//但是这里注意:a[i] 可以和 子集中任意一个元素组成一个全新的子集
//因为有 k 个 子集，所以最终方案数为 k * f(n-1,k)
//这道题考的好细，全是分类讨论
#include<iostream>
using namespace std;
using ll = long long;

ll f(ll o,ll p)
{
    if(o < p || p == 0)return 0;
    if(o == p || p == 1)return 1;
    return f(o-1,p-1) + p * f(o-1,p);
}
int main()
{
    ll n,k;cin>>n>>k;
    cout<<f(n,k);

    return 0;
}