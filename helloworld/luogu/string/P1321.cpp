// ����һ����Ŀûɶ˼·�����ǹۿ�����ֱ������
// �����ƶ���һ����Χ���е����е��Ǹ��ַ����ڣ���ô�ͻ�����������
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;                // cnt1ͳ������,cnt2ͳ��Ů��
    for (int i = 0; i < s.size() - 2; i++) // ������Ҫsize()-2��Ŀ���Ƿ�ֹԽ�磬��Ϊ�����濪�˸�i+2
    {
        if (s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y')
            cnt1++;
    }
    for (int i = 0; i < s.size() - 3; i++)
    {
        if (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' || s[i + 3] == 'l')
            cnt2++;
    }

    cout << cnt1 << "\n"
         << cnt2 << "\n";
    return 0;
}