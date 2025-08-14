#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
bool isPrime(int n)
{
    //��ǰ�ų� sum <= 1 �������ȷ�����������ж� 0 �� 1 Ϊ������
    if(n <= 1)return false;//���������������Ҫ����������
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
const int N = 26;
char a[N];
int s[N]; // a��ʾԭ����,s��ʾͰ��¼��ĸ����
int main()
{
    int minn = 1e9, maxx = 0, sum = 0;
    cin >> a;
    int len = strlen(a);
    memset(s, 0, sizeof(s)); // һ��Ҫ��ʼ�����飡��

    for (int i = 0; i < len; i++)
    {
        // int t = i;//�������ϳ�
        s[a[i] - 'a']++; // �� -'a'�ķ�ʽ����ΧȦ����0-25֮�䣬�ý����ۼ�
    }
    for (int i = 0; i < 26; i++)
    {
        if (s[i] > 0)
        {
            minn = min(minn, s[i]);
            maxx = max(maxx, s[i]);
        }
    }

    sum = maxx - minn;
    if (isPrime(sum))
    {
        cout << "Lucky Word" << '\n'<< sum;
    }
    else
    {
        cout << "No Answer" << '\n'<< 0;
    }

    return 0;
}