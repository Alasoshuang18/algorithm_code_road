#include <iostream>
#include <string>
using namespace std;
class Person;
class GoodFriend
{
public:
    GoodFriend();
    void express_love();  // ��express_love���Բ��߽���������
    void express_heart(); // ��express_heart���Է�����������
    Person *person;
};
class Person
{
    friend void GoodFriend::express_heart();//��Ҫ����GoodFriend��Ϊ����ȥ����˽��Ȩ��
public:
    string appearance1;

private:
    string heart1;

public:
    Person();
};
// ����ʵ�ֳ�Ա����
Person::Person()
{
    appearance1 = "������";
    heart1 = "�����񲻸���ȷ������";
}

GoodFriend::GoodFriend()
{
    person = new Person;
}
void GoodFriend::express_love()
{
    cout << "����������" << person->appearance1 << "\n";
}
void GoodFriend::express_heart()
{
    cout << "����������" << person->heart1 << "\n";
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