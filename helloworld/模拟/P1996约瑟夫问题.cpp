//�ص���������ô���� n ���˱�ɻ���ֻ��Ҫ�� �� n ����������� n+1 ���ˣ��Ͱѵ�ǰλ����Ϊ1
//a[cnt] ������Ǳ��Ϊ cnt �����Ƿ���̭
#include<iostream>
using namespace std;
const int N = 110;
int a[N];
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt = 1,sum = 0,now = 0;//cnt��ʾ��ǰλ��,sum��ʾ��������,now��ʾ���ڱ�����
    while(sum != n)
    {
        if(!a[cnt])// �����ǰλ�õ���û�б���̭
        {
            now++;
            if(now == m)
            {
                cout<<cnt<<" ";
                a[cnt] = 1;
                sum++;//���������ۼ�
                now = 0;//��Ϸ����,��������
            }
        }
        cnt++;//�ƶ�����һ��Ϊ��
        if(cnt == n+1)cnt = 1;
    }
   
    return 0;
}