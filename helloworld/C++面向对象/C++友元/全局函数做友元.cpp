#include <iostream>
using namespace std;
class Person
{
    friend void Friend1(Person *p);

public:
    string appearance1;

    Person()
    {
        appearance1 = "�����㣡";
        heart1 = "��֪�������Ƿ�����";
    }

private:
    string heart1;
};
// ����һ��ȫ�ֺ���
void Friend1(Person *p) // ע��:�˴�����ָ�룬ֻ��Ϊ��ָ���ӦPerson��ֵ������������ã���ô�Ϳ����޸�Person������������ֵ
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