#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char a, b, c, t;
    while (scanf("%c%c%c%*c", &a, &b, &c) != EOF)
    {
        // ��"%*c"(���ַ������洢�ַ����ַ�)�˵��س�
        if (a > b)
        {
            t = a;
            a = b;
            b = t;
        }
        if (a > c)
        {
            t = a;
            a = c;
            c = t;
        }

        if (b > c)
        {
            t = b;
            b = c;
            c = t;
        }
//�����и�˳����ע�⣡������
//���ȱȽ� a �� b��ȷ�� a �������н�С�ġ�
//Ȼ��Ƚ� a �� c��ȷ�� a �������ַ�����С�ġ�
//���Ƚ� b �� c��ȷ�� b ���м���ַ���c �����ġ�
        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}