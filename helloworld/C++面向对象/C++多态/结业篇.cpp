#include <iostream>
#include <string>
using namespace std;
//抽象出人际交往中最基本的类
class Basic1
{
public:
    //抽象类中看性格
    virtual void Personality() = 0;
};
class Basic2
{
public:
    //看年龄
    virtual void Age() = 0; 
};
class Basic3
{
public:
    // 看三观
    virtual void Perspectives() = 0;
};
//基本大类:用来实现多态
class Basic
{
public:
    Basic(Basic1 *P,Basic2 *A,Basic3 *E)
    {
        n_P = P;
        n_A = A;
        n_E = E;
    }
    void execuate()
    {
        //调用接口
        n_P->Personality();
        n_A->Age();
        n_E->Perspectives();
    }
private:
    Basic1 *n_P;
    Basic2 *n_A;
    Basic3 *n_E;
};
class Alaso : public Basic1,public Basic2,public Basic3
{
public:
    void Personality() 
    {
        cout<<"Kind"<<"\n";
    }
    void Age()
    {
        cout<<"19"<<"\n";
    }
    void Perspectives()
    {
        cout<<"Well"<<"\n";
    }
};
class shuang : public Basic1,public Basic2,public Basic3
{
public:
    void Personality() 
    {
        cout<<"independent"<<"\n";
    }
    void Age()
    {
        cout<<"20"<<"\n";
    }
    void Perspectives()
    {
        cout<<"Perfect"<<"\n";
    }
};

class wyyyyyyy : public Basic1,public Basic2,public Basic3
{
public:
    void Personality() 
    {
        cout<<"analytical"<<"\n";
    }
    void Age()
    {
        cout<<"18"<<"\n";
    }
    void Perspectives()
    {
        cout<<"terrific"<<"\n";
    }
};
void solve(Basic1 *p,Basic2 *a,Basic3 *e)
{   
    p->Personality();
    a->Age();
    e->Perspectives();
}
int main()
{
    Alaso alaso;
    shuang sh;
    wyyyyyyy w;
    cout<<"Alaso:";
    solve(&alaso,&alaso,&alaso);
    cout<<"shuang";
    solve(&sh,&sh,&sh);
    cout<<"w";
    solve(&w,&w,&w);

    return 0;
}