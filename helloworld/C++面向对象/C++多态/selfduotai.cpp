#include <iostream>
#include <string>
using namespace std;
class Mom
{
public:
    virtual void Festival()
    {
        cout << "Happy women's Day" << "\n";
    }
};
class Daughter : public Mom
{
public:
    void Festival()
    {
        cout << "Happy Goddesses'Day" << "\n";
    }
};
// 引用写法
//  void Festival1(Mom &M)
//  {
//      M.Festival();
//  }
// 指针写法
void Festival1(Mom *M)
{
    M->Festival();
}
void solve()
{
    Daughter Alaso_shuang;
    Festival1(&Alaso_shuang);
}
int main()
{
    solve();
    return 0;
}