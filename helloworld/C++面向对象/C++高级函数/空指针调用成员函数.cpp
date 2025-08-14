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
        this->age = age;//传入了一个空指针，所有我们需要判断这个指针是否为空
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