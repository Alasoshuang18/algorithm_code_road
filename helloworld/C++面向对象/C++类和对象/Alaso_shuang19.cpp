#include <iostream>
using namespace std;
class Student
{
public:
    string s_name;
    int s_age;

    void stu_name(string name)
    {
        s_name = name;
    }
    void age(int n)
    {
        s_age = n;
    }

    void Print()
    {
        cout << "ף" << s_name << " " << s_age << "���տ��֣�";
        // cout<<s_name<<" "<<s_age<<"\n";
    }
};
int main()
{
    Student p1;
    p1.age(19);
    p1.stu_name("Alaso_shuang");
    p1.Print();

    return 0;
}