#include <iostream>
#include <cstring>
using namespace std;
const int N = 27;
char a[N];
int main()
{
    int n, len = strlen(a);
    cin >> n;
    cin >> a;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] + n <= 'z')
        {
            a[i] = a[i] + n;
        }
        else
        {
            //% 26 �����þ���ȷ������� 0 �� 25 ֮�䣬�Ӷ��ѳ��� 26 ����ĸ���ƶ�ת���ɺϷ�����ĸλ��
            a[i] = 'a' + (a[i] - 'a' + n) % 26; // ����һ�� n = 1 ��'z',��ô-25����'a'����εõ�'a'��,ֱ�� 1 - 26 = -25����
        }
    }
    cout << a;
    return 0;
}