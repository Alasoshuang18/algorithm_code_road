#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;//���ݷ�Χ�ϴ���Ҫlong long
// const int N = 1e6+10;
// int a[N];
int main()
{
    ll a1,a2,n;
    cin>>a1>>a2>>n;
    ll d = a2-a1;
    ll sum = 0;
    for(int i = 1;i <= n;i++)
    {
        sum = n * a1 + n*(n-1)*d / 2;
    }
    cout<<sum<<"\n";
    return 0;
}

//������ ������ÿһ�Ȼ��ֱ�����
// #include<iostream>
// using namespace std;
// using ll = long long;
// ll sum = 0;
// int main()
// {
//     ll a1,a2,n;
//     cin>>a1>>a2>>n;
//     ll d = a2 - a1;
//     sum = a1+a2;
//     for(int i = 3;i <= n;i++)
//     {
//         a2 += d;
//         sum += a2;
//     }
//     cout<<sum<<"\n";

//     return 0;
// }