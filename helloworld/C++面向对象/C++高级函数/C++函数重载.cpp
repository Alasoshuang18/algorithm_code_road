// #include<iostream>
// using namespace std;
// void f()
// {
//     cout<<"22222"<<"\n";
// }

// void f(int a)
// {
//     cout<<"11111"<<"\n";
// }
// int main()
// {
//     f(10);
//     return 0;
// }


#include<iostream>
using namespace std;
//������Ϊ���ص�����
void f(int &a)
{
    cout<<"111111"<<"\n";
}
void f(const int &a)
{
    cout<<"22222"<<"\n";
}




//������������Ĭ�ϲ���
void f2(int a)
{
    cout<<"33333333"<<"\n";
}
void f2(int a,int b = 10)
{
    cout<<"44444444"<<"\n";
}

int main()
{
    int a = 10;
    f(a);//��(int &a)�Ǹ�����
    f(10);//��(const int &a)�Ǹ�����
    //f2(10);//�������壬f2���������Ե���
    return 0;
}

