#include<iostream>
using namespace std;

    //用引用代替指针
void swap1(int a,int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout<<a<<" "<<b<<"\n";//仅在函数体内部交换
}
int main()
{
    //引用基本语法:实例
    // int a = 10;
    // int &b = a;
    // b = 20;
    // cout<<a<<"\n";
    // int a = 10;
    // int &b = a;
    // int &c = a;//报错！引用 变量 "c" 需要初始值设定项
    // int d = 20;
    // b = d;//赋值操作，而不是更改引用
    // cout<<b<<c<<"\n";

    int a = 10,b = 20;
    swap1(a,b);
    cout<<a<<" "<<b<<"\n";//值传递其实没有实质上的交换，只是拷贝了一份，在内部函数进行交换
    return 0;
}
