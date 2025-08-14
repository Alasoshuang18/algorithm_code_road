#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    //设置姓名
    void setName(string name1)
    {
        n_name = name1;
    }
    //获取姓名
    string getName()
    {
        return n_name;
    }
    //获取年龄
    int get_age()
    {
        return n_age;
    }
    //设置偶像
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
    int n_age = 18;//年龄初始化不会导致乱码
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