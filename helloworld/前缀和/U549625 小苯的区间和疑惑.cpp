//˼·:Ҫ������������ֵ��Ҳ����Pre[r] - Pre[l-1]
//��Ŀ��˵��,r����i�ұߵ���,�������ǿ��Զ���Ϊ��r-n�ĺ�׺��;��l��С��i��Ҳ�������ǿ�����Ϊ��1-l��ǰ׺��
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+10;
ll a[N],Pre[N+1],Suf[N+2],Prefix[N];

int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    ll n;cin>>n;
    for(ll i = 1;i <= n;i++)cin>>a[i];

    for(ll i = 1;i <= n;i++)
    {
        Pre[i] = Pre[i-1] + a[i];
    }
    Prefix[0] = 0;//ǰ׺�����
    //��1-l��ǰ׺��
    for(ll i = 1;i <= n;i++)
    {
        Prefix[i] = min(Prefix[i-1],Pre[i]);
    }
    Suf[n+1] = LLONG_MIN;//ע�����ȫ��������ll����СֵҲ��Ҫ��ll��
    for(ll i = n;i > 0;i--)
    {
        Suf[i] = max(Suf[i+1],Pre[i]);
    }
    for(ll i = 1;i <= n;i++)
    {
        cout<<Suf[i] - Prefix[i-1]<<" ";
    }
    return 0;
}