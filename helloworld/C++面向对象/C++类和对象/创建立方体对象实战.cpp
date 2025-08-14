#include <iostream>
using namespace std;

// 创建立方体类
// 设置属性
// 获取面积和体积
// 判断两个立方体是否相同(全局判断 和 成员判断)
class Cube
{
public:
    // 设置长
    void chang(int CHANG)
    {
        L = CHANG;
    }
    // 获取长
    int get_chang()
    {
        return L;
    }

    // 设置宽
    void kuan(int KUAN)
    {
        K = KUAN;
    }
    // 获取宽
    int get_K()
    {
        return K;
    }
    // 设置高
    void gao(int GAO)
    {
        G = GAO;
    }
    // 获取高
    int get_G()
    {
        return G;
    }

    // 获取面积和体积
    int mianji()
    {
        return 2 * L * K + 2 * L * G + 2 * K * G;
    }
    int tiji()
    {
        return L * K * G;
    }
    // 利用成员判断
    bool panduan2(Cube &c1) // 注意这里只需要传入一个参数，就是另外一个立方体，因为已经存在一个立方体了
    {
        if (L == c1.get_chang() && K == c1.get_K() && G == c1.get_G())
        {
            return true;
        }
        return false;
    }

private:
    int L;
    int K;
    int G;
};

// 利用全局判断 两个立方体是否相等
bool panduan(Cube &c1, Cube &c2) // 传引用就不需要拷贝一份数据
{
    if (c1.get_chang() == c2.get_chang() && c1.get_K() == c2.get_K() && c1.get_G() && c2.get_G())
    {
        return true;
    }
    return false;
}
int main()
{
    Cube c1, c2;
    c1.chang(10);
    c1.kuan(10);
    c1.gao(10);

    c2.chang(10);
    c2.kuan(10);
    c2.gao(10);
    // cout<<c1.mianji()<<"\n";
    // cout<<c1.tiji()<<"\n";
    bool res = panduan(c1, c2);
    cout << res << "\n"; // 答案是1就表明相同，答案不为1就表示不相同
    bool res2  = c1.panduan2(c2);
    cout<<res2<<"\n";
    return 0;
}