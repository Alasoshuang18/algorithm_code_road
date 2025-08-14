//�����õ�76pts�Ĵ���
// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// const int N = 2100;
// ll a[N];
// ll n,c;
// int main()
// {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     cin>>n>>c;
//     ll cnt = 0;
//     for(int i = 1;i <= n;i++)cin>>a[i];

//     for(int i = 1;i <= n;i++)
//     {
//         for(int j = 1;j <= n;j++)
//         {
//             if(i == j)continue;
//             if(a[i]-a[j] == c)cnt++;
//         }
//     }
//     cout<<cnt<<"\n";
//     return 0;
// }
//���ֲ��ұ߽�������ҳ�����±����С�±꣬�������+1��Ϊ������
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+20;
int a[N];
ll n,c;
//bs1��ʾѰ�ҵ�һ������x��λ��
int bs1(int x)
{
    ll l = -1,r = n;
    while(l+1 != r)
    {
        ll mid = (l+r)>>1;
        if(a[mid] < x) l = mid;
        else r = mid;
    }
    if(a[r] == x) return r;
    return -1;
}

//bs2��ʾ��������±�
int bs2(int x)
{
    ll l = -1,r = n;
    while(l+1 != r)
    {
        ll mid = (l+r)>>1;
        if(a[mid] <= x)l = mid;
        else r = mid;
    }
    if(a[l] == x)return l;
    return -1;
}
int main()
{   
    ll sum = 0;cin>>n>>c;
    for(int i = 0;i < n;i++)cin>>a[i];

    sort(a,a+n);
    for(int i = 0;i < n;i++)
    {
        ll t = a[i] + c;
        if(bs1(t) != -1)
        {
            sum += bs2(t) - bs1(t) + 1;
        }
    }
    cout<<sum<<"\n";

    return 0;
}