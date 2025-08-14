#include <iostream>
#include <string>
using namespace std;
class Cal
{
public:
    virtual int Yunsuan()
    {
        return 0;
    }

public:
    int m_A;
    int m_B;
};
class Plus : public Cal
{
public:
    int Yunsuan()
    {
        return m_A + m_B;
    }
};
class Sub : public Cal
{
public:
    int Yunsuan()
    {
        return m_A - m_B;
    }
};
class mul : public Cal
{
public:
    int Yunsuan()
    {
        return m_A * m_B;
    }
};
class chu : public Cal
{
public:
    int Yunsuan()
    {
        return m_A / m_B;
    }
};
void solve()
{
    Cal *p = new Plus; // 注意是父类的指针指向子类对象啊！
    // Cal *p;// 此时 p1 是一个野指针，不能直接使用
    p->m_A = 10;
    p->m_B = 20;
    cout << p->m_A << "+" << p->m_B << "=" << p->Yunsuan() << "\n";
    delete p; // 注意是把堆区的数据给释放了，接下来的p->m_A 和 p->m_B的数据为空
    p = new Sub;
    p->m_A = 20;
    p->m_B = 10;
    cout << p->m_A << "-" << p->m_B << "=" << p->Yunsuan() << "\n";
    delete p;
    p = new mul;
    p->m_A = 20;
    p->m_B = 10;
    cout << p->m_A << "*" << p->m_B << "=" << p->Yunsuan() << "\n";
    delete p;
    p = new chu;
    p->m_A = 18800;
    p->m_B = 10;
    cout << p->m_A << "/" << p->m_B << "=" << p->Yunsuan() << "\n";
}
int main()
{
    solve();
    return 0;
}