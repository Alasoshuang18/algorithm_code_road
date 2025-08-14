#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int N = 45;
int a[N][N];
int main()
{
    int n;
    cin >> n;
    int x = 1, y = (1 + n) / 2;
    a[1][(n + 1) / 2] = 1;
    for (int i = 2; i <= n * n; i++)
    {
        if (x == 1 && y != n)
        {
            x = n;
            y += 1;
            a[x][y] = i;
            continue;
        }
        if (x != 1 && y == n)
        {
            y = 1;
            x -= 1;
            a[x][y] = i;
            continue;
        }
        if (x == 1 && y == n)
        {
            //x++;
            x += 1;
            // y += 1;
            a[x][y] = i;
            continue;
        }
        if (x != 1 && y != n && a[x - 1][y + 1] == 0)
        {
            x -= 1;
            y += 1;
            a[x][y] = i;
            continue;
        }
        else
        {
            x += 1;
            a[x][y] = i;
            continue;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}