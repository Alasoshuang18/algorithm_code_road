//˼·:����һ������Ӻ����ӽ��бȽϣ��ϴ�ļ�����һ��
#include<iostream>
using namespace std;
const int N = 110;
int a[N][N];
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {   
            cin>>a[i][j];
        }
    }

    //���ƴӵ����ڶ��㿪ʼ
    for(int i = n-1;i >= 1;i--)
    {
        for(int j = 1;j <= i;j++)
        {
            if(a[i+1][j] > a[i+1][j+1])
            {
                a[i][j] += a[i+1][j];
            }else a[i][j] += a[i+1][j+1];
        }
    }
    cout<<a[1][1];//������ϵ��Ƶ���߲�

    
    return 0;
}