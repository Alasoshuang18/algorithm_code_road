#include<iostream>
using namespace std;
using ll = long long;
int main()
{
    ll n,m;cin>>n>>m;
    ll cnt1 = 0,cnt2 = 0;
    for(int i = 1;i <= n;i++)//ö�ٳ��ĳ���
    {
        for(int j = 1;j <= m;j++)//ö�ٿ�ĳ���
        {
            if(i == j) cnt1 += (n-i + 1) * (m-j+1);
            else cnt2 += (n-i+1) * (m-j +1);
        }
    }
    cout<<cnt1<<" "<<cnt2<<"\n";
    return 0;
}