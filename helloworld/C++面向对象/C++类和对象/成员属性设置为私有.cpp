#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    //��������
    void setName(string name1)
    {
        n_name = name1;
    }
    //��ȡ����
    string getName()
    {
        return n_name;
    }
    //��ȡ����
    int get_age()
    {
        return n_age;
    }
    //����ż��
    void idol(string ID1)
    {
        n_ID = ID1;
    }
    string idol1()
    {
        return n_ID;
    }
private:
    string n_name;
    string n_ID;
    int n_age = 18;//�����ʼ�����ᵼ������
};


int main()
{
    Person p;
    p.setName("Alaso_shuang");
    p.idol("soso  wenyingqian");
    cout<<"name:"<<p.getName()<< "\n";
    cout<< "favourite actor:"<< p.idol1() <<"\n";

    return 0;
}