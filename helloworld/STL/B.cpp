#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, m;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        double sum = 0, x = n;
        sum += x;
        for (int i = 2; i <= m; i++)
        {
            x = sqrt(x);
            sum += x;
        }

        printf("%.2f\n", sum);
    }

    return 0;
}