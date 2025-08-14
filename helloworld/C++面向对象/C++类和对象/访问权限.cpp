#include <iostream>
using namespace std;

// 公共权限
class Person
{
public:
    string m_name;
protected:
    string m_car;
private:
    int m_password;


public:
    void f()
    {
        m_name = "Alaso_shuang";
        m_car = "benchi";
        m_password = 123456;
    }
}; 
//你看，类内都可以访问
int main()
{
    Person p1;
    //p1. 什么的时候，它选项中只出现了 public权限 下的数据
    return 0;
}