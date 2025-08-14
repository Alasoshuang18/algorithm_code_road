#include<iostream>
using namespace std;
class Person
{
public:
    int m_A;
    int m_B;
};
//利用全局函数重载左移运算符
ostream &operator << (ostream &cout,Person &p)//本质:cout << p
//用 &是因为确保他只有一个
{
    cout<<p.m_A<<" "<<p.m_B;
    return cout;

}
void test()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    cout<<p1<<"\n";
}
int main()
{
    test();
    return 0;
}