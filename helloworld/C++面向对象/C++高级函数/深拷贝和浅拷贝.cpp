#include<iostream>
#include<algorithm>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Person 默认构造函数"<<"\n";
    }
    Person(int age,int height)
    {
        M_age = age;
        M_Height = new int(height);
        //Height = new int(height);//开辟一个在堆区的内存
        cout<<"Person 有参构造函数"<<"\n";
    }
    //用深拷贝解决浅拷贝重复释放的问题
    //再开一个地址给我自己开的堆区空间
    Person(const Person &p)
    {
        cout<<"Person 拷贝函数实例"<<'\n';
        M_age = p.M_age;
        M_Height = new int(*p.M_Height);
    }

    ~Person()
    {
        //注意:
        //堆区开辟的内存空间需要手动进行释放
        if(M_Height != NULL)
        {
            delete M_Height;
            M_Height = NULL;
        }
        cout<<"Person 析构函数"<<"\n";
    }
    int M_age;
    int *M_Height;
};
void test01()
{
    Person p1(10,160);
    cout<<"p1的年龄是"<<p1.M_age<<" "<<"p1的身高是"<<*p1.M_Height<<"\n";

    Person p2(p1);
    cout<<"p2的年龄是"<<p2.M_age<<" "<<"p1的身高是"<<*p2.M_Height<<"\n";
}
int main()
{
    test01();
    return 0;
}