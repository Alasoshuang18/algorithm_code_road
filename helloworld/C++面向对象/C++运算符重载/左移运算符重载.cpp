#include<iostream>
using namespace std;
class Person
{
public:
    int m_A;
    int m_B;
};
//����ȫ�ֺ����������������
ostream &operator << (ostream &cout,Person &p)//����:cout << p
//�� &����Ϊȷ����ֻ��һ��
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