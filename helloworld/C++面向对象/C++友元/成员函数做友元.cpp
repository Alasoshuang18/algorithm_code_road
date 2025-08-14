#include <iostream>
#include <string>
using namespace std;
class Person;
class GoodFriend
{
public:
    GoodFriend();
    void express_love();  // 让express_love可以不走进她的内心
    void express_heart(); // 让express_heart可以访问她的内心
    Person *person;
};
class Person
{
    friend void GoodFriend::express_heart();//需要声明GoodFriend作为本类去访问私有权限
public:
    string appearance1;

private:
    string heart1;

public:
    Person();
};
// 类外实现成员函数
Person::Person()
{
    appearance1 = "我宣你";
    heart1 = "我至今不敢明确我内心";
}

GoodFriend::GoodFriend()
{
    person = new Person;
}
void GoodFriend::express_love()
{
    cout << "你正在倾诉" << person->appearance1 << "\n";
}
void GoodFriend::express_heart()
{
    cout << "你正在倾诉" << person->heart1 << "\n";
}
void test()
{
    GoodFriend gd;
    gd.express_love();
    gd.express_heart();
}
int main()
{
    test();
    return 0;
}