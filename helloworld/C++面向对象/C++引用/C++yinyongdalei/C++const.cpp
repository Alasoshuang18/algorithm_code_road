#include<iostream>
using namespace std;
void Print(const int &a)//�ĳ�const�����Ͳ��������޸�ֵ��
{
    //a = 500;//����������һ��ֵ����ô�β������ֵҲ���
    cout<<a<<"\n";
}
int main()
{
    //int &tmp = 10;//ע��:���ﱨ����,���õ�ʱ�������һ���Ϸ����ڴ�ռ�




    //const int &tmp = 10;
    //�����const �������γ���:
    /*
    int a = 10;
    int &tmp = a;
    */
    int tmp = 10;
    Print(tmp); 
    return 0;
}