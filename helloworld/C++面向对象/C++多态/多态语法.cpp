#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void speaking()
    {
        cout<<"Animal Speaking"<<"\n";
    }
};

class Dog:public Animal
{
public:
    void speaking()
    {
        cout<<"Dog Speaking"<<"\n";
    }
};
//地址早就绑定好了，在编译阶段就确定了地址
//父类指针写法
// void Animal1(Animal *a)
// {
//     a->speaking();
// }
//父类引用写法
void Animal1(Animal &ani)
{
    ani.speaking();
}
void test()
{
    Dog g;
    //指针写法: Animal1(&g);
    //引用写法
    Animal1(g);
}
int main()
{
    test();
    return 0;
}