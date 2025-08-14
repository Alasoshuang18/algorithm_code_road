#include<iostream>
using namespace std;
class Person
{
public:
    static void f()
    {
        m_A = 100;//静态成员变量
        cout<<"Static void f的调用"<<"\n";
    }
    static int m_A;
};
int Person::m_A = 0;
void test01()
{
    //通过对象访问
    Person p;
    p.f();
    //通过类名进行访问
    Person::f();
}
int main()
{
    test01();
    return 0;
}