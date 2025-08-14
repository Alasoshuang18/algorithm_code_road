#include <iostream>
using namespace std;
const int N = 1e3 + 10;
int a[N][N], prefix[N][N];
int main()
{
    int n, m, q, sum = 0;
    cin >> n >> m >>q;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
        }
    }
    int x1, y1, x2, y2;
    while (q--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        sum = prefix[x2][y2] - prefix[x2][y1 - 1] - prefix[x1 - 1][y2] + prefix[x1 - 1][y1 - 1];
        cout<<sum<<'\n';
    }
    return 0;
}