#include<iostream>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Person 默认函数构造实例"<<"\n";
    }
    Person(int age)
    {
        cout<<"Person 有参函数实例"<<"\n";
        m_age = age;
    }
    Person(const Person &p)
    {
        cout<<"Person 拷贝函数实例";
    }
    ~Person()
    {
        cout<<"Person 析构函数实例"<<"\n";
    }
    int m_age;
};
void test01()
{
    Person p1(10);
    Person p2(p1);
}

//值传递方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
    Person p;
    doWork(p);
}

//值方式返回局部对象
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
