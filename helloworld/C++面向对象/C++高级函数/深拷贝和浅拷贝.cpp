#include<iostream>
#include<algorithm>
using namespace std;
class Person
{
public:
    Person()
    {
        cout<<"Person Ĭ�Ϲ��캯��"<<"\n";
    }
    Person(int age,int height)
    {
        M_age = age;
        M_Height = new int(height);
        //Height = new int(height);//����һ���ڶ������ڴ�
        cout<<"Person �вι��캯��"<<"\n";
    }
    //��������ǳ�����ظ��ͷŵ�����
    //�ٿ�һ����ַ�����Լ����Ķ����ռ�
    Person(const Person &p)
    {
        cout<<"Person ��������ʵ��"<<'\n';
        M_age = p.M_age;
        M_Height = new int(*p.M_Height);
    }

    ~Person()
    {
        //ע��:
        //�������ٵ��ڴ�ռ���Ҫ�ֶ������ͷ�
        if(M_Height != NULL)
        {
            delete M_Height;
            M_Height = NULL;
        }
        cout<<"Person ��������"<<"\n";
    }
    int M_age;
    int *M_Height;
};
void test01()
{
    Person p1(10,160);
    cout<<"p1��������"<<p1.M_age<<" "<<"p1�������"<<*p1.M_Height<<"\n";

    Person p2(p1);
    cout<<"p2��������"<<p2.M_age<<" "<<"p1�������"<<*p2.M_Height<<"\n";
}
int main()
{
    test01();
    return 0;
}