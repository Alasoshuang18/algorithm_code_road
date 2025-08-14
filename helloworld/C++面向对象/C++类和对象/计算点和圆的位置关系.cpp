#include <iostream>
using namespace std;

// ����һ������
class Point
{
public:
    // ���õ��x����
    void set_X(int xzuobiao)
    {
        x_x = xzuobiao;
    }
    // ��ȡ���x����
    int get_X()
    {
        return x_x;
    }
    // ���õ��y����
    void set_Y(int yzuobiao)
    {
        y_y = yzuobiao;
    }
    // ��ȡ���y����
    int get_Y()
    {
        return y_y;
    }

private:
    int x_x;
    int y_y;
};

// ����һ��Բ��
class Circle
{
public:
    // ���ð뾶
    void set_R(int rzuobiao)
    {
        R_p = rzuobiao;
    }
    // ��ȡ�뾶
    int get_RR()
    {
        return R_p;
    }
    // ����Բ��
    void set_center(Point c)  // �޸ĺ�������ʹ������������淶
    {
        yuanxin = c;
    }
    // ��ȡԲ��
    Point get_center()  // �޸ĺ�������ʹ������������淶
    {
        return yuanxin;
    }

private:
    int R_p;
    Point yuanxin; // Բ��
};

// ȫ�ֺ����жϵ���Բ�Ĺ�ϵ
void panduanguanxi(Circle &c1, Point &dian)
{
    // ����㵽Բ�ĵľ����ƽ��
    int dis = (c1.get_center().get_X() - dian.get_X()) * (c1.get_center().get_X() - dian.get_X()) +
              (c1.get_center().get_Y() - dian.get_Y()) * (c1.get_center().get_Y() - dian.get_Y());
    int Rdis = c1.get_RR() * c1.get_RR();

    if (dis == Rdis)
        cout << "yuanshang" << "\n";  // ����Բ��
    else if (dis > Rdis)
        cout << "yuanwai" << "\n";   // ����Բ��
    else if (dis < Rdis)
        cout << "yuannei" << "\n";   // ����Բ��
}

int main()
{
    Circle c1;
    Point xin;  // ����Բ�ĵ�
    c1.set_R(10);   // ����Բ�İ뾶
    xin.set_X(10);  // ����Բ�ĵ�x����
    xin.set_Y(10);  // ����Բ�ĵ�y����
    c1.set_center(xin);  // ����Բ��

    // ����һ����
    Point p;
    p.set_X(10);  // ���õ��x����
    p.set_Y(15);  // ���õ��y����

    // �жϵ���Բ�Ĺ�ϵ
    panduanguanxi(c1, p);

    return 0;
}