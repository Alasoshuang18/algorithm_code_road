#include<iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        
    }
//常函数
    void f()const //修饰的其实是this指针
    {
        this->m_B = 100;
        //this->m_A = 100;//直接报错了，常函数不能修改值
    }
    int m_A;
    mutable int m_B;
};
void test01()
{
    Person p1;
    p1.f();
}
//常对象
void test02()
{
   const Person p;
   //p.m_A = 100;//不允许修改
}
int main()
{
    test02();
    return 0;
}