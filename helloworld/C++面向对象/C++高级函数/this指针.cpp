#include<iostream>
using namespace std;
class Person
{
public:
    //������Ƴ�ͻ
    Person(int age)
    {
        this->age = age;
        //ע��һ������������Ҫ�ò�ͬ����ȥ���֣���������ֻ�Ǽ������ȥ������ͬ���������
    }
    Person& PersonAdd(int age1)//ȡ�����õĻ����ο�����һ�����ݣ�������ƽ������
    {
        this->age1 += age1;
        //���ض�����
        return *this;
    }
    int age = 20;
    int age1 = 10;
};
void test01()
{
    Person p(20);
    cout<<p.age<<"\n";
}
void test02()
{
    Person p1(20);
    Person p2(10);

    p2.PersonAdd(10).PersonAdd(10).PersonAdd(10);//��������thisָ����в����ۼ�
    cout<<p2.age1<<"\n";
}
int main()
{
    //test01();
    test02();
    return 0;
}