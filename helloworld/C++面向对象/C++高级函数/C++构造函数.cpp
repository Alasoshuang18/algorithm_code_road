#include <iostream>
using namespace std;
class Person
{
public:
    // 无参构造
    Person()
    {
        cout << "Person 构造函数实例" << "\n";
    }
    // 有参构造
    Person(int a)
    {
        age = a;
        cout << "Person 有参构造实例" << "\n";
    }

    // 拷贝构造
    Person(const Person &p)
    {
        age = p.age; // 把对象的属性拷贝到自己身上
    }

    // 析构函数
    ~Person()
    {
        cout << "Person 析构函数实例" << "\n";
    }
    int age = 10;
};
// 调用
// 括号法
// 注意点:调用无参函数的时候不要加上小括号(),会被认为是一个函数的声明
// eg: Person p();
void test01()
{
    Person p;
    Person p2(10); // 有参函数调用
    Person p3(p2); // 拷贝函数调用
}

// 显式法
// 注意:不要利用拷贝函数来初始化匿名对象
// 下列函数赋值的右边就是 匿名对象
void test02()
{
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);
}

// 隐式转换法
void test03()
{
    Person p1;
    Person p2 = 10;
    Person p3 = p2;
    // 相当于编辑器自动转换为 Person p3 = Person(p2);
}
int main()
{
    // test01();
    // test02();
    test03();
    return 0;
}