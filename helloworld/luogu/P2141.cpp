#include <iostream>
using namespace std;
const int N = 110;
int a[N];
bool flag[N];
int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)//������һ������
    {
        for (int j = i + 1; j < n; j++)//�����ڶ�������
        {
            int sum = a[i] + a[j];//�������

            for (int k = 0; k < n; k++) // ������
            {
                if (k != i && k != j && a[k] == sum && !flag[k])
                {
                    cnt++;
                    flag[k] = 1;
                    break;
                }
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}