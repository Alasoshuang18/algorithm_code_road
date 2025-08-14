#include <iostream>
using namespace std;

// ������������
// ��������
// ��ȡ��������
// �ж������������Ƿ���ͬ(ȫ���ж� �� ��Ա�ж�)
class Cube
{
public:
    // ���ó�
    void chang(int CHANG)
    {
        L = CHANG;
    }
    // ��ȡ��
    int get_chang()
    {
        return L;
    }

    // ���ÿ�
    void kuan(int KUAN)
    {
        K = KUAN;
    }
    // ��ȡ��
    int get_K()
    {
        return K;
    }
    // ���ø�
    void gao(int GAO)
    {
        G = GAO;
    }
    // ��ȡ��
    int get_G()
    {
        return G;
    }

    // ��ȡ��������
    int mianji()
    {
        return 2 * L * K + 2 * L * G + 2 * K * G;
    }
    int tiji()
    {
        return L * K * G;
    }
    // ���ó�Ա�ж�
    bool panduan2(Cube &c1) // ע������ֻ��Ҫ����һ����������������һ�������壬��Ϊ�Ѿ�����һ����������
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

// ����ȫ���ж� �����������Ƿ����
bool panduan(Cube &c1, Cube &c2) // �����þͲ���Ҫ����һ������
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
    cout << res << "\n"; // ����1�ͱ�����ͬ���𰸲�Ϊ1�ͱ�ʾ����ͬ
    bool res2  = c1.panduan2(c2);
    cout<<res2<<"\n";
    return 0;
}