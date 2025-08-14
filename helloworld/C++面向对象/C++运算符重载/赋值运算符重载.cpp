#include <iostream>
using namespace std;
class Person
{
public:
    Person(int age)
    {
        m_Age = new int(age);
    }

    ~Person()
    {
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
    }

    Person &operator=(Person &p)
    {
        // Ӧ�����ж��Ƿ��������ڶ�����Ӧ�����ͷŸɾ�,��ȥ�����������
        if (m_Age != NULL)
        {
            delete m_Age;
            m_Age = NULL;
        }
        m_Age = new int(*p.m_Age); // ����Ĳ���

        // ��������Ϳ���������
        return *this;
    }
    int *m_Age;
};
void test()
{
    Person p1(20);
    Person p2(19);
    Person p3(18);
    p1 = p2 = p3;
    cout << *p1.m_Age << "\n";
    cout << *p2.m_Age << "\n";
    cout << *p3.m_Age << "\n";
}
int main()
{
    test();
    return 0;
}