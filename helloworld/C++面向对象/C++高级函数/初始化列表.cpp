#include<iostream>
using namespace std;
class Person
{
public:
    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
    {

    }

    int m_A;
    int m_B;
    int m_C;
};
void test01()
{
    Person p(40,40,40);
    cout<<p.m_A<<"\n";
    cout<<p.m_B<<"\n";
    cout<<p.m_C<<"\n";
}
int main()
{
    test01();
    return 0;
}