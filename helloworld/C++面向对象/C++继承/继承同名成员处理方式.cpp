#include <iostream>
using namespace std;
class F
{
public:
    F()
    {
        a = 10000;
    }

public:
    int a;
};
class son1 : public F
{

public:
    son1()
    {
        a = 2000000;
    }

public:
    int a;
};
void solve()
{
    son1 s;
    cout << s.a << "\n";
    F f;
    cout << f.F::a << "\n"; // 父类添加作用域
}
int main()
{
    solve();
    return 0;
}