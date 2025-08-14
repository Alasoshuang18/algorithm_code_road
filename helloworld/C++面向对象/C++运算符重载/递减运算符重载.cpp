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
//前置--
selfjian &operator--()
{
    m_Num--;
    return *this;
}


//后置 --
selfjian operator--(int)
{
    //先用临时变量存储你原先的值
    selfjian tmp = *this;
    // 再递减
    m_Num--;
    return tmp;
}
private:
    int m_Num;
};
// 重载左移运算符，达到可以输出整个类的效果
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