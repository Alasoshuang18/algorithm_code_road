#include<iostream>
using namespace std;
class Person
{
public:
    static int m_A;
};
int Person::m_A = 100;
void test01()
{   
    Person p;
    cout<<p.m_A<<"\n";
    Person p2;
    p2.m_A = 200;

    cout<<p2.m_A<<"\n";
}
void test02()
{
    //通过对象进行访问
    Person p1;
    cout<<p1.m_A<<"\n";
    //通过类名进行访问
    cout<<Person::m_A<<"\n";
}
int main()
{
    //test01();
    test02();
    return 0;
}