// ����: ������ѧ��
// ��:ѧ��
// ��Ϊ:��ʾѧ����������ѧ��
// ע��:���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
#include <iostream>
#include <string>
using namespace std;

class Student
{
    // Ȩ��
public:
    // ����
    string m_name;
    int m_xuehao;

    // ��Ϊ
    // ������һ���Ҳ�̫��������Ҫ��ôȥ����������������ͣ�
    // �� void !!!!!
    // ��ʾ������ѧ��
    void sS()
    {
        cout << m_name << " " << m_xuehao << "\n";
    }

    // ��������ֵ
    void setName(string name)
    {
        m_name = name;
    }
    // ��ID��ֵ
    void setID(int n)
    {
        m_xuehao = n;
    }
};

int main()
{
    // ͨ����ʵ����
    Student s1;
    // s1.m_name = "Alaso_shuang";
    // ����һ��д�������ú������εķ�ʽ
    s1.setName("Alaso_shuang");
    // s1.m_xuehao = 19;
    s1.setID(19);
    s1.sS();

    return 0;
}