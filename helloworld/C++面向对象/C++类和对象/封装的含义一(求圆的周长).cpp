#include <iostream>
using namespace std;
const double PI = 3.14;

// class��ʾ���һ���࣬���������ž���������
class Circle
{
    // ����Ȩ��
public: // ����Ȩ��
    // ����
    int c_r; // �뾶

    // ��Ϊ
    // ��ȡԲ���ܳ�
    double zhouchang()
    {
        return 2 * PI * c_r;
    }
};

int main()
{
    // ͨ��Բ�� ���������Բ(����)
    Circle C1;
    // ��Բ��������Խ��и�ֵ
    C1.c_r = 10;
    cout << C1.zhouchang() << "\n";

    return 0;
}