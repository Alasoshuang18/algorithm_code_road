#include <iostream>
using namespace std;
class Person
{
public:
    // �޲ι���
    Person()
    {
        cout << "Person ���캯��ʵ��" << "\n";
    }
    // �вι���
    Person(int a)
    {
        age = a;
        cout << "Person �вι���ʵ��" << "\n";
    }

    // ��������
    Person(const Person &p)
    {
        age = p.age; // �Ѷ�������Կ������Լ�����
    }

    // ��������
    ~Person()
    {
        cout << "Person ��������ʵ��" << "\n";
    }
    int age = 10;
};
// ����
// ���ŷ�
// ע���:�����޲κ�����ʱ��Ҫ����С����(),�ᱻ��Ϊ��һ������������
// eg: Person p();
void test01()
{
    Person p;
    Person p2(10); // �вκ�������
    Person p3(p2); // ������������
}

// ��ʽ��
// ע��:��Ҫ���ÿ�����������ʼ����������
// ���к�����ֵ���ұ߾��� ��������
void test02()
{
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);
}

// ��ʽת����
void test03()
{
    Person p1;
    Person p2 = 10;
    Person p3 = p2;
    // �൱�ڱ༭���Զ�ת��Ϊ Person p3 = Person(p2);
}
int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}