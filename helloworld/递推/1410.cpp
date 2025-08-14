#include <iostream>
#include <algorithm>
using namespace std;
const int N = 110;
int a[N][N];
int r[N][3];
int main()
{
    int n, k = 1;
    cin >> n; // k��ʾr������±�
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    // �������·��
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            a[i][j] = a[i][j] + max(a[i + 1][j], a[i + 1][j + 1]);
        }
    }
    // ����·��
    r[1][1] = 1;
    r[1][2] = 1;

    // ��ǰ���ڼ���ĵ�
    int i = 1, j = 1;
    while (i < n)
    {
        k++;
        if (a[i + 1][j] > a[i + 1][j + 1])
        {
            r[k][1] = i + 1;
            r[k][2] = j;
            i++;
        }
        else
        {
            r[k][1] = i + 1;
            r[k][2] = j + 1;
            i++;
            j++;
        }
    }
    for (int i = k; i >= 1; i--)
    {
        cout << r[i][1] << "," << r[i][2];
        if (i != 1)
        {
            cout << "->";
        }
    }

    cout << "\n"
         << a[1][1];

    return 0;
}