#include<iostream>
using namespace std;

    //�����ô���ָ��
void swap1(int a,int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout<<a<<" "<<b<<"\n";//���ں������ڲ�����
}
int main()
{
    //���û����﷨:ʵ��
    // int a = 10;
    // int &b = a;
    // b = 20;
    // cout<<a<<"\n";
    // int a = 10;
    // int &b = a;
    // int &c = a;//�������� ���� "c" ��Ҫ��ʼֵ�趨��
    // int d = 20;
    // b = d;//��ֵ�����������Ǹ�������
    // cout<<b<<c<<"\n";

    int a = 10,b = 20;
    swap1(a,b);
    cout<<a<<" "<<b<<"\n";//ֵ������ʵû��ʵ���ϵĽ�����ֻ�ǿ�����һ�ݣ����ڲ��������н���
    return 0;
}
