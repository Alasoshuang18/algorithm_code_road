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
    Cal *p = new Plus; // ע���Ǹ����ָ��ָ��������󰡣�
    // Cal *p;// ��ʱ p1 ��һ��Ұָ�룬����ֱ��ʹ��
    p->m_A = 10;
    p->m_B = 20;
    cout << p->m_A << "+" << p->m_B << "=" << p->Yunsuan() << "\n";
    delete p; // ע���ǰѶ��������ݸ��ͷ��ˣ���������p->m_A �� p->m_B������Ϊ��
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