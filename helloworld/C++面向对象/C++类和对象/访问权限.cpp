#include <iostream>
using namespace std;

// ����Ȩ��
class Person
{
public:
    string m_name;
protected:
    string m_car;
private:
    int m_password;


public:
    void f()
    {
        m_name = "Alaso_shuang";
        m_car = "benchi";
        m_password = 123456;
    }
}; 
//�㿴�����ڶ����Է���
int main()
{
    Person p1;
    //p1. ʲô��ʱ����ѡ����ֻ������ publicȨ�� �µ�����
    return 0;
}