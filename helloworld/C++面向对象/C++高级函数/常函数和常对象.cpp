#include<iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        
    }
//������
    void f()const //���ε���ʵ��thisָ��
    {
        this->m_B = 100;
        //this->m_A = 100;//ֱ�ӱ����ˣ������������޸�ֵ
    }
    int m_A;
    mutable int m_B;
};
void test01()
{
    Person p1;
    p1.f();
}
//������
void test02()
{
   const Person p;
   //p.m_A = 100;//�������޸�
}
int main()
{
    test02();
    return 0;
}