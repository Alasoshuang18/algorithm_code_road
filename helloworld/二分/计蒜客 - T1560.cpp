#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int n, m;
bool erfen(int x)
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return true;
        else if (a[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    if(a[l] == x)return true;
    else return false;
}
int main()
{
    cin >> n >> m;
    int x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    while (m--)
    {
        cin >> x;
        if (erfen(x))
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
            
    }

    return 0;
}
