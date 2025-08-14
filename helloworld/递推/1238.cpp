// //递归写法
// #include<iostream>
// #include<algorithm>
// #include<cstdio>
// using namespace std;
// int fun(int n)
// {
//     int sum = 0;
//     if(n == 1 || n == 2)
//     {
//         sum = 1;
//     }else
//     {
//         sum = fun(n-1) + fun(n-2);
//     }
//     return sum;
// }
// int main()
// {
//     for(int i = 1;i <= 12;i++)
//     {
//         cout<<fun(i)<<" ";
//     }

//     return 0;
// }
//数组写法
#include<iostream>
using namespace std;
using ll = long long;
const int N = 50;
ll a[N];
int main()
{
    int n;cin>>n;
    a[1] = 1;
    a[2] = 1;
    for(int i = 3;i <= n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    cout<<a[n];

    return 0;
}