#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            // �ж���λ�ַ�:����ǵ�һ���ַ�������ǰһ���ַ��ǿո�
            if (i == 0 || s[i - 1] == ' ')
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] = toupper(s[i]);
                }
        }
        cout << s << "\n";
    }

    return 0;
}