#include <iostream>
using namespace std;
class selfdefinejia
{
    friend ostream &operator<<(ostream &cout, selfdefinejia s);

public:
    selfdefinejia()
    {
        m_Num = 0;
    }
    // ǰ�����������
    selfdefinejia &operator++() // ������������ΪҪһֱ��һ�����ݽ��в���
    {
        // �Ƚ��� ++ ����
        m_Num++;
        return *this;
    }
    // ���õ���
    selfdefinejia operator++(int) // int��ʾռλ����������������ǰ�úͺ���
    {
        // �ȼ�¼��ʱ���
        selfdefinejia tmp = *this;
        // �����
        m_Num++;
        // ��󽫼�¼�������
        return tmp;
    }

private:
    int m_Num;
};

ostream &operator<<(ostream &cout, selfdefinejia s)
{
    cout << s.m_Num;
    return cout;
}
void test()
{
    selfdefinejia SJ;
    cout << ++SJ << "\n"; // ��Ҫд�������������
}
int main()
{
    test();
    return 0;
}