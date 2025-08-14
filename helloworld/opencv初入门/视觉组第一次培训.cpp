// #include<iostream>
// using namespace std;
// namespace li
// {
//     string lih = "Alaso_shuang";
// }
// int main()
// {
//     cout<<li::lih;
// }
#include<iostream>
using namespace std;
class Minus 
{
public:
    Minus(int l,int h)
    {
        m_O = l;
        m_R = h;
    }
    int m_O;
    int m_R;
    int m_P;
};
class Plus
{
public:
    Plus():m_A(10),m_B(20)
    {}
    int m_A;
    int m_B;
};
void test01()
{
    Plus j;
    cout<<j.m_A + j.m_B<<"\n";
    
}
void test02()
{
    Minus M(10,20);
    cout<<M.m_O - M.m_R<<"\n";
}
int main()
{
    test01();
    test02();
    return 0;
}