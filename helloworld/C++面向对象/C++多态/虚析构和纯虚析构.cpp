// 纯虚析构和虚析构都是为了在父类指针指向子类对象的堆区数据释放
// 不同点:
// 虚析构:直接写声明和实现即可
// 纯虚析构:需要在类内写声明,内外写实现(记得加上父类作用域)
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    virtual void Jiao() = 0;
    // 虚析构写法
    //  virtual ~Animal()
    //  {
    //      cout<<"Animal xigoufunction"<<"\n";
    //  }

    // 纯虚析构写法
    virtual ~Animal() = 0;
};
Animal::~Animal()
{
    cout << "Animal xigoufunction" << "\n";
}

class Dog : public Animal
{
public:
    void Jiao()
    {
        cout << "Wolf Wolf" << "\n";
    }
    Dog(string name)
    {
        m_Name = new string(name); // 开一个新的空间定义为string类型的name
    }
    // 如果没有虚析,下面这段析构狗子类的代码不可能会执行,因为我开了个堆区的数据
    // 解决方案:写一个虚析构
    ~Dog()
    {
        cout << "DogxigouFunction" << "\n";
        if (this->m_Name != NULL)
        {
            delete m_Name;
            m_Name = NULL;
        }
    }
    string *m_Name;
};
void test()
{
    Animal *An = new Dog("WangCai");
    An->Jiao();
    delete An;
}
int main()
{
    test();
    return 0;
}