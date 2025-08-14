// 属性: 姓名和学号
// 类:学生
// 行为:显示学生的姓名和学号
// 注意:类中的属性和行为 我们统一称为成员
#include <iostream>
#include <string>
using namespace std;

class Student
{
    // 权限
public:
    // 属性
    string m_name;
    int m_xuehao;

    // 行为
    // 这里有一点我不太懂，我需要怎么去定义这个函数的类型？
    // 用 void !!!!!
    // 显示姓名和学号
    void sS()
    {
        cout << m_name << " " << m_xuehao << "\n";
    }

    // 给姓名赋值
    void setName(string name)
    {
        m_name = name;
    }
    // 给ID赋值
    void setID(int n)
    {
        m_xuehao = n;
    }
};

int main()
{
    // 通过类实例化
    Student s1;
    // s1.m_name = "Alaso_shuang";
    // 还有一种写法就是用函数传参的方式
    s1.setName("Alaso_shuang");
    // s1.m_xuehao = 19;
    s1.setID(19);
    s1.sS();

    return 0;
}