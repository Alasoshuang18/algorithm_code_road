#include<iostream>
using namespace std;
class Person
{
public:
    //解决名称冲突
    Person(int age)
    {
        this->age = age;
        //注意一般我们这里需要用不同变量去区分，但是这里只是极端情况去处理相同变量的情况
    }
    Person& PersonAdd(int age1)//取消引用的话仅次拷贝了一份数据，类似于平行宇宙
    {
        this->age1 += age1;
        //返回对象本身
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

    p2.PersonAdd(10).PersonAdd(10).PersonAdd(10);//可以利用this指针进行不断累加
    cout<<p2.age1<<"\n";
}
int main()
{
    //test01();
    test02();
    return 0;
}