#include <iostream>
using namespace std;
class F
{
public:
    // ���麯��д��
    virtual void f() = 0;
};
class son1 : public F
{
public:
    virtual void f()
    {
        cout << "Hello,world" << "\n";
    }
};
void solve()
{
    F *son = new son1; // ������ʹ�ó��������� "F" �Ķ���
    son->f();
    delete son;
}
int main()
{
    solve();
    return 0;
}