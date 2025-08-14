#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int x, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
        cnt++;
        if (cnt % 2 == 0)
        {
            int mid1 = cnt / 2 - 1;
            int mid2 = cnt / 2;
            cout << (a[mid1] + a[mid2]) / 2 << "\n";
        }
        else
        {

            int mid = cnt / 2;
            cout << a[mid] << "\n";
        }
    }

    return 0;
}