//�̳��﷨: class �Լ��������(����):�̳з�ʽ ����
#include<iostream>
using namespace std;
class Person
{
public:
    void body()
    {
        cout<<"Hello pretty girl"<<"\n";
    }
    void age1()
    {
        cout<<"19"<<"\n";
    }
};
class Alaso_shuang : public Person
{
public:
    void voice()
    {
        cout<<"interesting to listen"<<"\n";
    }
};
void test()
{
    Alaso_shuang Alaso;
    Alaso.age1();
    Alaso.body();
    Alaso.voice();
}
int main()
{
    test();
    return 0;
}