#include<iostream>
using namespace std;
//��Ҫ���ؾֲ�����
//ԭ������

// int &test()
// {
//     int b = 10;
//     return b;
// //�����Ƿ��ؾֲ�����,����ջ��,����ִ�����ֱ�Ӷ���
// //��������ʾֱ�ӱ�����
// }


//�������Ǻ���������Ϊ��ֵ��ʵ��
int &test1()
{
    static int a = 10;//������Ϊ��̬����������ȫ������������Ϊ����Ľ������Զ��ͷű���
    return a;
}

int main()
{
    // int &h = test();
    // cout<<h<<"\n";
    int &h = test1();
    cout<<h<<"\n";
    return 0;
}