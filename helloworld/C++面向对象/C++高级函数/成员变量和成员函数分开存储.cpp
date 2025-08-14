#include<iostream>
using namespace std;
class Person
{
public: 
    int m_A;
    static int m_B;//静态成员变量
    void f()
    {
        int k;
    }
};
int Person::m_B;
void test01()
{
    Person p;
    cout<<sizeof(p)<<"\n";
}
//单纯一个空对象占用字节为 1
void test02()
{
    Person p1;
    cout<<sizeof(p1)<<"\n";
}
int main()
{
    //test01();
    test02();
    return 0;
}