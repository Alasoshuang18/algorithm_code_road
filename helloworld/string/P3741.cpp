#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++) // �ַ����ĳ��ȷ�Χ�� 0 - n-1
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            cnt++;
            // �������˺󣬵�������һ�����ı���� VK������
            s[i] = 'P', s[i + 1] = 'P';
            i++; // ������һ�����ж�
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != 'P' && s[i] == s[i + 1])
        {
            cnt++;
            cout << cnt;
            return 0;
        }
    }
    cout << cnt << '\n';

    return 0;
}