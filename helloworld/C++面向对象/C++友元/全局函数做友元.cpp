#include <iostream>
using namespace std;
class Person
{
    friend void Friend1(Person *p);

public:
    string appearance1;

    Person()
    {
        appearance1 = "我宣你！";
        heart1 = "不知道内心是否还宣你";
    }

private:
    string heart1;
};
// 定义一个全局函数
void Friend1(Person *p) // 注意:此处传入指针，只是为了指向对应Person的值，如果传入引用，那么就可以修改Person里面任意属性值
{
    cout << "Surface" << p->appearance1 << "\n";
    cout << "Heart1" << p->heart1 << "\n";
}
void test()
{
    Person p;
    Friend1(&p);
}
int main()
{
    test();

    return 0;
}