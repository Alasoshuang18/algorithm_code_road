//˼·:�ձ�����
#include<iostream>
using namespace std;
int f(int x,int y)
{
    if(x == 0)return y+1;
    if(x > 0 && y == 0)return f(x-1,1);
    if(x > 0 && y > 0) return f(x-1,f(x,y-1));
    return 0;
    //��Ȼ�߼��Ϻ���f�ĵݹ�������ջ᷵��һ��ֵ
    //���������޷���ȫȷ����һ��
    //ͨ���ں���ĩβ���һ��Ĭ�Ϸ���ֵ����return 0;��
    //������ȷ���߱���������ʹǰ���������������
    //������Ȼ�᷵��һ��ֵ������������������ľ���
}
int main()
{
    int m,n;cin>>m>>n;
    cout<<f(m,n)<<"\n";
    return 0;
}