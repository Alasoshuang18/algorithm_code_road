#include<iostream>
using namespace std;
class Person
{
public:
    void showName()
    {
        cout<<"hello"<<"\n";
    }
    void showName1(int age)
    {
        if(this == NULL)return;
        this->age = age;//������һ����ָ�룬����������Ҫ�ж����ָ���Ƿ�Ϊ��
        cout<<this->age<<"\n";
    }
    int age;
};
void test01()
{
    Person *p = NULL;
    p->showName();
    p->showName1(20);
}
int main()
{
    test01();
    return 0;
}