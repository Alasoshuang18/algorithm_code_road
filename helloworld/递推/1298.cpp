//ע��:��Ҫ�ر�ע���һ�к͵�һ��,ֻ�ܴ�һ������ִ�
#include<bits/stdc++.h>
using namespace std;
const int N = 110;
int a[N][N];
int main()
{
    int n,m;cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>a[i][j];
        }
    }
    //ע��:��Ҫ��ʼ������
    //��ʼ����һ��
    // for(int j = 2;j <= m;j++)
    // {
    //     a[1][j] += a[1][j-1];
    // }
    // //��ʼ����һ��
    // for(int i = 2;i <= n;i++)
    // {
    //     a[i][1] += a[i-1][1];
    // }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(i == 1)a[i][j] = a[i][j] + a[i][j-1];
            if(j == 1)a[i][j] = a[i][j] + a[i-1][j];
            if(i == 1 && j == 1) a[i][j] = a[i][j];
            if(i != 1 && j != 1)
            {
                a[i][j] = a[i][j] + max(a[i-1][j],a[i][j-1]);
            }
            
        }
    }

    cout<<a[n][m]<<"\n";
    return 0;
}