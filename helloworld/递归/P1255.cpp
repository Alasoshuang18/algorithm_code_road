#include<iostream>
using namespace std;
//������ĵ��ƹ�ʽ
//f(i) = f(i-1) + f(i-2)
//��ֹ����:��������������벻��
//����������㼴�ɣ����ǿ��� i > n �������
int f(int i)
{
    if(i == 1)return 1;
    if(i == 2)return 2;
    return f(i-1) + f(i-2);
}
int main()
{
    int n;cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}