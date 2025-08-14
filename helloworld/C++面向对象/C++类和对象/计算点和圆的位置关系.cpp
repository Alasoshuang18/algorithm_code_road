#include <iostream>
using namespace std;

// 创建一个点类
class Point
{
public:
    // 设置点的x坐标
    void set_X(int xzuobiao)
    {
        x_x = xzuobiao;
    }
    // 获取点的x坐标
    int get_X()
    {
        return x_x;
    }
    // 设置点的y坐标
    void set_Y(int yzuobiao)
    {
        y_y = yzuobiao;
    }
    // 获取点的y坐标
    int get_Y()
    {
        return y_y;
    }

private:
    int x_x;
    int y_y;
};

// 创建一个圆类
class Circle
{
public:
    // 设置半径
    void set_R(int rzuobiao)
    {
        R_p = rzuobiao;
    }
    // 获取半径
    int get_RR()
    {
        return R_p;
    }
    // 设置圆心
    void set_center(Point c)  // 修改函数名，使其更符合命名规范
    {
        yuanxin = c;
    }
    // 获取圆心
    Point get_center()  // 修改函数名，使其更符合命名规范
    {
        return yuanxin;
    }

private:
    int R_p;
    Point yuanxin; // 圆心
};

// 全局函数判断点与圆的关系
void panduanguanxi(Circle &c1, Point &dian)
{
    // 计算点到圆心的距离的平方
    int dis = (c1.get_center().get_X() - dian.get_X()) * (c1.get_center().get_X() - dian.get_X()) +
              (c1.get_center().get_Y() - dian.get_Y()) * (c1.get_center().get_Y() - dian.get_Y());
    int Rdis = c1.get_RR() * c1.get_RR();

    if (dis == Rdis)
        cout << "yuanshang" << "\n";  // 点在圆上
    else if (dis > Rdis)
        cout << "yuanwai" << "\n";   // 点在圆外
    else if (dis < Rdis)
        cout << "yuannei" << "\n";   // 点在圆内
}

int main()
{
    Circle c1;
    Point xin;  // 创建圆心点
    c1.set_R(10);   // 设置圆的半径
    xin.set_X(10);  // 设置圆心的x坐标
    xin.set_Y(10);  // 设置圆心的y坐标
    c1.set_center(xin);  // 设置圆心

    // 创建一个点
    Point p;
    p.set_X(10);  // 设置点的x坐标
    p.set_Y(15);  // 设置点的y坐标

    // 判断点与圆的关系
    panduanguanxi(c1, p);

    return 0;
}