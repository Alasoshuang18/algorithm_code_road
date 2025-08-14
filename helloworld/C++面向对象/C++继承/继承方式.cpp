#include<iostream>
using namespace std;
class F
{
public:
    int a;
protected:
    int b;
private:
    int c;
};
class F1
{
public:
    int a;
protected:
    int b;
private:
    int c;
};
class F2
{
public:
    int a;
protected:
    int b;
private:
    int c;
};
class son : public F
{
public:
    void f()
    {
        a = 10;//父类中公共权限成员拿到手了
    }
protected:
    void f1()
    {
        b = 20;
    }
// private:
//     void f3()
//     {
//         c = 1;//报错啦
//     }
};

class son1 : protected F1
{
protected:
    void f1()
    {
        a = 10;
        b = 40;
        //c = 90;//继续报错,说明父类隐私不允许访问
    }
};
class son2 : private F2
{
private:
    void f5()
    {
        a = 100;
        b = 300;
    }
    
};
void test01()
{
    son1 s;
}
int main()
{
    test01();
    return 0;
}