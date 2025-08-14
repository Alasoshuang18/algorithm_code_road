#include<iostream>
using namespace std;
class F1
{
public:
    F1()
    {
        m_A = 100000;
    }
public:
    int m_A;
};

class F2
{
public:
    F2()
    {
        m_B = 200000;
    }
    
public:
    int m_B;
};
class children : public F1,public F2//继承两个父类
{
public:
    int c_M;
    int d_M;
};
void test()
{
    children C;
    cout<<sizeof(C)<<"\n";
    cout<<C.m_A<<"\n";
    cout<<C.m_B<<"\n";
    //若是父类成员名称相同，就按照继承同名成员方式处理,直接加作用域即可
}
int main()
{
    test();
    return 0;
}