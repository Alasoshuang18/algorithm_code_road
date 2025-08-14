#include<iostream>
using namespace std;
//不要返回局部变量
//原因如下

// int &test()
// {
//     int b = 10;
//     return b;
// //这里是返回局部变量,属于栈区,程序执行完后直接丢掉
// //我这里显示直接报错了
// }


//接下来是函数可以作为左值的实例
int &test1()
{
    static int a = 10;//把它化为静态变量，属于全局区，不会因为程序的结束而自动释放变量
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