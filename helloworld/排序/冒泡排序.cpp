// ˼��:�����Ƚ�,��Ŀ���(����ˮ��)
#include <iostream>
#include <algorithm>
using namespace std;
const int N = 10010;
int a[N];
void Bubble_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        bool flag = true;
        for (int j = 1; j <= n - i; j++) // Ҫ�� n-i δ�����������
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
            else
                flag = false;
        }
        if (flag)
            break;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    Bubble_sort(a, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";

    return 0;
}