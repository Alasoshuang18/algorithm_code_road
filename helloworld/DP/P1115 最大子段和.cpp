// //�������˼·����ǰ׺��
// //��������֪����ǰ���ǰ׺��ȥǰ��Сǰ׺����
// #include<iostream>
// #include<algorithm>
// using namespace std;
// using ll = long long;
// const int N = 2e5+10;
// ll a[N],Prefix[N];
// ll ans[N];
// int main()
// {
//     int n;cin>>n;
//     for(int i = 1;i <= n;i++) cin>>a[i];
//     for(int i = 1;i <= n;i++) Prefix[i] = Prefix[i-1] + a[i];

//     //�����ǰ׺ - Сǰ׺
//     //Сǰ׺��ʵ���ǵ�������ֻ����һ����ʱ��a[1]
//     ans[1] = a[1];
//     ll minn = 0,res = -0x3f3f3f3f;//minn��ʾǰ׺�͵���Сֵ,res��ʾ�洢��ǰ�ҵ�������������
//     for(int i = 2;i <= n;i++)
//     {
//         ans[i] = Prefix[i] - minn;
//         minn = min(minn,Prefix[i]);
//     }

//     for(int i = 2;i <= n;i++)
//     {
//         res = max(res,ans[i]);
//     }
//     cout<<res<<"\n";

//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
using ll = long long;
const int N = 2e5+10;
ll a[N],dp[N];
ll ans = 0;//���Ǽ�¼����������
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    dp[1] = a[1];
    ans = dp[1];
    for(int i = 2;i <= n;i++)
    {
        dp[i] = max(a[i],dp[i-1] + a[i]);
        ans = max(ans,dp[i]);
    }
    cout<<ans<<"\n";
    return 0;
}