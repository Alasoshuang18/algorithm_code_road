#include <iostream>
using namespace std;
class F
{
public:
    // 纯虚函数写法
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
    F *son = new son1; // 不允许使用抽象类类型 "F" 的对象
    son->f();
    delete son;
}
int main()
{
    solve();
    return 0;
}