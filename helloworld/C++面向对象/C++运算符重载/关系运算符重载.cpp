#include<iostream>
using namespace std;
class Person
{
public:
    Person(string NAME,int XUEHAO)
    {
        N_name = NAME;
        xuehao = XUEHAO;
    }

   bool operator==(Person &p)
    {
        if(this->N_name == p.N_name && this->xuehao == p.xuehao)
        {
            return true;
        }
        return false;
    }
    string N_name;
    int xuehao;
};
void test()
{
    Person p1("Alaso_shuang",20);
    Person p2("Alaso",19);

    if(p1 == p2)
    {
        cout<<"yes"<<"\n";
    }else cout<<"No"<<"\n";
}
int main()
{
    test();
    return 0;
}