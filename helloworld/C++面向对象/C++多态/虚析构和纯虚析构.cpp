// ��������������������Ϊ���ڸ���ָ��ָ���������Ķ��������ͷ�
// ��ͬ��:
// ������:ֱ��д������ʵ�ּ���
// ��������:��Ҫ������д����,����дʵ��(�ǵü��ϸ���������)
#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    virtual void Jiao() = 0;
    // ������д��
    //  virtual ~Animal()
    //  {
    //      cout<<"Animal xigoufunction"<<"\n";
    //  }

    // ��������д��
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
        m_Name = new string(name); // ��һ���µĿռ䶨��Ϊstring���͵�name
    }
    // ���û������,�����������������Ĵ��벻���ܻ�ִ��,��Ϊ�ҿ��˸�����������
    // �������:дһ��������
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