#include<iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Person Ĭ�Ϻ�������ʵ��"<<"\n";
    }
    Person(int age)
    {
        cout<<"Person �вκ���ʵ��"<<"\n";
        m_age = age;
    }
    Person(const Person &p)
    {
        cout<<"Person ��������ʵ��";
    }
    ~Person()
    {
        cout<<"Person ��������ʵ��"<<"\n";
    }
    int m_age;
};
void test01()
{
    Person p1(10);
    Person p2(p1);
}

//ֵ���ݷ�ʽ������������ֵ
void doWork(Person p)
{

}
void test02()
{
    Person p;
    doWork(p);
}

//ֵ��ʽ���ؾֲ�����
Person doWOrk()
{
    Person p1;
    return p1;
}
void test03()
{
    Person p2 = doWOrk();
}
int main()
{
    test03();
    return 0;
}
