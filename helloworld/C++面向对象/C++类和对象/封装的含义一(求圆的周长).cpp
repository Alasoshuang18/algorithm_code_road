#include <iostream>
using namespace std;
const double PI = 3.14;

// class表示设计一个类，类后面紧跟着就是类名称
class Circle
{
    // 访问权限
public: // 公共权限
    // 属性
    int c_r; // 半径

    // 行为
    // 获取圆的周长
    double zhouchang()
    {
        return 2 * PI * c_r;
    }
};

int main()
{
    // 通过圆类 创建具体的圆(对象)
    Circle C1;
    // 给圆对象的属性进行赋值
    C1.c_r = 10;
    cout << C1.zhouchang() << "\n";

    return 0;
}