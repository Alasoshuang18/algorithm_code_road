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
    //ͨ��������з���
    Person p1;
    cout<<p1.m_A<<"\n";
    //ͨ���������з���
    cout<<Person::m_A<<"\n";
}
int main()
{
    //test01();
    test02();
    return 0;
}