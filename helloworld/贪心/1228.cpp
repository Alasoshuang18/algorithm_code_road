#include<bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N];
int main()
{
    int n,r;cin>>n>>r;
    int sum = 0,sum1 = 0;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    //������ˮʱ��
    // for(int i = 1;i <= n;i++)
    // {
    //     if(i >= r + 1)//����Ϊǰr��û��Ҫ�ȴ���ֱ��ȥ��Ӧ��ˮ��ͷ��ˮ����
    //     //��Ϊ�и�sum�����Եð�����ȫ������
    //     {
    //         a[i] += a[i-r];
    //     }
        
    //     sum += a[i];
    // }
    // cout<<sum<<"\n";
    for(int i = 1;i <= r;i++)
    {
        sum += a[i];
    }
    for(int i = r+1;i <= n;i++)
    {
        a[i] += a[i-r];
        sum1 += a[i];
    }
    cout<<sum+sum1<<"\n";
    return 0;
}