#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
const int N = 5e4+10;
ll Pre[N],a[N];
int l[7],r[7];//����ֻ�ᱻ�Ż���1-6
int main()
{
    ll n,tmp,maxx = 0;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    for(int i = 1;i <= n;i++)
    {
        Pre[i] = Pre[i-1] + a[i];
        tmp = Pre[i] % 7;
        if(i < l[tmp]) l[tmp] = i;
        else if(l[tmp] == 0) l[tmp] = i;
        if(i > r[tmp]) r[tmp] = i;

    }
    //̰����Ѱ�������䳤��
    if(r[0]) maxx = r[0];
    for(int i = 1;i <= 6;i++)
    {
        if(r[i] - l[i] >= maxx && l[i] != 0)
        {
            maxx = r[i] - l[i];
        }
    }
    cout<<maxx<<"\n";
    



    return 0;
}