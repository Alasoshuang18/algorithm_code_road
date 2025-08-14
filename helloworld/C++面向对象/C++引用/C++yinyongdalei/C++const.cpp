#include<iostream>
using namespace std;
void Print(const int &a)//改成const常量就不会轻易修改值了
{
    //a = 500;//如果我任意改一下值，那么形参里的数值也会变
    cout<<a<<"\n";
}
int main()
{
    //int &tmp = 10;//注意:这里报错了,引用的时候必须是一个合法的内存空间




    //const int &tmp = 10;
    //这里的const 将它修饰成了:
    /*
    int a = 10;
    int &tmp = a;
    */
    int tmp = 10;
    Print(tmp); 
    return 0;
}