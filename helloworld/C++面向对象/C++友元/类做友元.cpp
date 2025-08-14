#include<iostream>
using namespace std;
class Building
{
friend class Goodgirl;
public:
    Building();
public:
    string m_sitting;
private:
    string m_Bedroom;
};
class Goodgirl
{
public:
    Goodgirl();
    void visit();
private:
    Building *building;

};

//把构造函数写出来
Building::Building()
{
    m_Bedroom = "bedroom";
    m_sitting = "sittingroom";
}

Goodgirl::Goodgirl()
{
    building = new Building;
}

void Goodgirl::visit()
{
    cout<<"hello"<<building->m_sitting<<"\n";
    cout<<"HEllO"<<building->m_Bedroom<<"\n";
}
void test()
{
    Goodgirl gl;
    gl.visit();
}
int main()
{
    test();
    return 0;
}