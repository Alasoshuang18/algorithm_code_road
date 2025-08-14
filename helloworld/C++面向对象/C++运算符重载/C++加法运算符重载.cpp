#include<iostream>
using namespace std;
class Person
{
public:
 //成员函数实现重载
//     Person operator+(Person &p)
//     {
//         Person tmp;
//         tmp.m_A = this->m_A + p.m_A;
//         tmp.m_B = this->m_B + p.m_B;
//         return tmp;
//     }
// public:
//     int m_A;
//     int m_B;
public:
    int m_A;
    int m_B;
};
//全局函数实现重载
Person operator+(Person &p1,Person &p2)
{
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}
void test01()
{
    Person p1;
    p1.m_A = 40;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 40;
    p2.m_B = 40;

    Person p3 = p1 + p2;
    cout<<p3.m_A<<" "<<p3.m_B<<"\n";
}
int main()
{
    test01();
    return 0;
}