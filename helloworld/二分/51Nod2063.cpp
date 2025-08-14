#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int n, q, m;
int ef(int x)
{
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = l + ((r-l)>>1);
        if(a[mid] == x)return 1;
            if(a[mid] > x) r = mid - 1;
            else l = mid+1; 
        }
    return 0;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> q;
    while (q--)
    {
        cin >> m;
        if (ef(m))
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }

    return 0;
}