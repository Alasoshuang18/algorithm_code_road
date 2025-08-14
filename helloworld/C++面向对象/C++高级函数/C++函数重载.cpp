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
//引用作为重载的条件
void f(int &a)
{
    cout<<"111111"<<"\n";
}
void f(const int &a)
{
    cout<<"22222"<<"\n";
}




//函数重载遇到默认参数
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
    f(a);//走(int &a)那个部分
    f(10);//走(const int &a)那个部分
    //f2(10);//出现歧义，f2两个都可以调用
    return 0;
}

