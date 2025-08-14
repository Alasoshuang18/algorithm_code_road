// #include<iostream>
// #include<string>
// using namespace std;
// //设计 手机 的类
// class Phone
// {
// public:
//     Phone(string p_name)
//     {
//         ren_pinpai = p_name;
//     }
//     string ren_pinpai;
// };
// class Person
// {
// public:
//     Person(string name1,string pname):ren_name(name1),ren_phone(pname)
//     {
//         //ren_name = name1;
//     }
//     string ren_name;
//     Phone ren_phone;
// };
// void test01()
// {
//     Person p("Alaso_shuang","Iphone");
//     cout<<p.ren_name<<" "<<p.ren_phone.ren_pinpai<<"\n";
// }
// int main()
// {
//     test01();
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
class Birthday
{
public:
    Birthday(string cakename)
    {
        cake_name = cakename;
    }
    string cake_name;
};
class Person
{
public:
    Person(string h_name,string cake1):li_name(h_name),li_Birthday(cake1)
    {
        age = new int(20);
    }
    Person(const Person &p):li_name(p.li_name),li_Birthday(p.li_Birthday)
    {
        age = new int(*p.age);
    }
    string li_name;
    Birthday li_Birthday; 
    int *age;

    ~Person()
    {
        if(age != NULL)
        {
            delete(age);
            age = NULL;
        }
    }
};
void test01()
{
    Person p1("Alaso_shuang","chanjuan");
    cout<<p1.li_name<<" "<<p1.li_Birthday.cake_name<<" "<<*p1.age<<"\n";
}
int main()
{
    test01();
    return 0;
}