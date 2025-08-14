#include<iostream>
using namespace std;
class f
{
public:
    int a;
protected:
    int b;
private:
    int c;
}; 
class son1:public f
{
    int a;
};
void solve()
{
    son1 s;
    cout<<"sizeof's value : "<< sizeof(s);
}
int main()
{
    solve();
    //答案是16,说明父类所有的成员都继承在了子类身上
    return 0;
}