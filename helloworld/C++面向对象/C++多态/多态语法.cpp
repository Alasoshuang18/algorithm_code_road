#include<iostream>
using namespace std;
class Animal
{
public:
    virtual void speaking()
    {
        cout<<"Animal Speaking"<<"\n";
    }
};

class Dog:public Animal
{
public:
    void speaking()
    {
        cout<<"Dog Speaking"<<"\n";
    }
};
//��ַ��Ͱ󶨺��ˣ��ڱ���׶ξ�ȷ���˵�ַ
//����ָ��д��
// void Animal1(Animal *a)
// {
//     a->speaking();
// }
//��������д��
void Animal1(Animal &ani)
{
    ani.speaking();
}
void test()
{
    Dog g;
    //ָ��д��: Animal1(&g);
    //����д��
    Animal1(g);
}
int main()
{
    test();
    return 0;
}