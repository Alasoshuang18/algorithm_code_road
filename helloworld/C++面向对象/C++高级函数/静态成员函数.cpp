#include<iostream>
using namespace std;
class Person
{
public:
    static void f()
    {
        m_A = 100;//��̬��Ա����
        cout<<"Static void f�ĵ���"<<"\n";
    }
    static int m_A;
};
int Person::m_A = 0;
void test01()
{
    //ͨ���������
    Person p;
    p.f();
    //ͨ���������з���
    Person::f();
}
int main()
{
    test01();
    return 0;
}