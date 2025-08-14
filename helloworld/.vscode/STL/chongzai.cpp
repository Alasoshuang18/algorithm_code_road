#include <iostream>
#include <algorithm>
using namespace std;
const int N = 10010;
struct Paixu
{
    int x;
    double y;
    string z;

    bool operator<(const Paixu &t) const
    {
        return x < t.x;
    }
} a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        printf("%d %.2lf %s", a[i].x, a[i].y, a[i].z);
    }
    return 0;
}