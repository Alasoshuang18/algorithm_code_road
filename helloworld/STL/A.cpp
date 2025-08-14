#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char a, b, c, t;
    while (scanf("%c%c%c%*c", &a, &b, &c) != EOF)
    {
        // 用"%*c"(空字符，不存储字符的字符)滤掉回车
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
//这里有个顺序需注意！！！！
//首先比较 a 和 b，确保 a 是两者中较小的。
//然后比较 a 和 c，确保 a 是三个字符中最小的。
//最后比较 b 和 c，确保 b 是中间的字符，c 是最大的。
        printf("%c %c %c\n", a, b, c);
    }
    return 0;
}