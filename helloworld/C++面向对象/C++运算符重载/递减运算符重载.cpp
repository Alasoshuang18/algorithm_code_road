#include <iostream>
using namespace std;
class selfjian
{
    friend ostream &operator<<(ostream &cout, selfjian jian);

public: 
    selfjian()
    {
        m_Num = 7;
    }
//ǰ��--
selfjian &operator--()
{
    m_Num--;
    return *this;
}


//���� --
selfjian operator--(int)
{
    //������ʱ�����洢��ԭ�ȵ�ֵ
    selfjian tmp = *this;
    // �ٵݼ�
    m_Num--;
    return tmp;
}
private:
    int m_Num;
};
// ����������������ﵽ��������������Ч��
ostream &operator<<(ostream &cout, selfjian jian)
{
    cout << jian.m_Num << "\n";
    return cout;
}
void test()
{
    selfjian J;
    cout << --J << "\n";
}
void test1()
{
    selfjian J1;
    cout<<J1--<<"\n";
}
int main()
{
    test();
    test1();
    return 0;
}