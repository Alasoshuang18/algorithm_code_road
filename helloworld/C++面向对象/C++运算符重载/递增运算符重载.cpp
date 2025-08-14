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
    // 前置运算符递增
    selfdefinejia &operator++() // 返回引用是因为要一直对一个数据进行操作
    {
        // 先进行 ++ 运算
        m_Num++;
        return *this;
    }
    // 后置递增
    selfdefinejia operator++(int) // int表示占位参数可以用于区分前置和后置
    {
        // 先记录当时结果
        selfdefinejia tmp = *this;
        // 后递增
        m_Num++;
        // 最后将记录结果返回
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
    cout << ++SJ << "\n"; // 需要写重载左移运算符
}
int main()
{
    test();
    return 0;
}