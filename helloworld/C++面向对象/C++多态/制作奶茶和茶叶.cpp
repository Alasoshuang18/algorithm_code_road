#include<iostream>
using namespace std;
class YinPin
{
public:
    virtual void Chongpao() = 0;
    virtual void JiaoBan() = 0;
    virtual void DaoLiao() = 0;
    virtual void BaoZhuang() = 0;

    void MakeYinpin()
    {
        Chongpao();
        JiaoBan();
        DaoLiao();
        BaoZhuang();
    }
};
class NaiCha : public YinPin
{
public: 
    void Chongpao()
    {
        cout<<"add Water!"<<"\n";
    } 
    void JiaoBan()
    {
        cout<<"DaoGu"<<"\n";
    }
    void DaoLiao()
    {
        cout<<"Push in it"<<"\n";
    }
    void BaoZhuang()
    {
        cout<<"FengZhuang"<<"\n";
    }
};
class ChaYe : public YinPin
{
public: 
    void Chongpao()
    {
        cout<<"add heat Water!"<<"\n";
    } 
    void JiaoBan()
    {
        cout<<"JiaoJiaoJiao"<<"\n";
    }
    void DaoLiao()
    {
        cout<<"throw it"<<"\n";
    }
    void BaoZhuang()
    {
        cout<<"BaoBaoBao"<<"\n";
    }
};
void solve()
{
    YinPin *Y = new NaiCha;
    Y->MakeYinpin();
    delete Y;
    Y = new ChaYe;
    Y->MakeYinpin();
    delete Y;

}
int main()
{
    solve();
    return 0;
}