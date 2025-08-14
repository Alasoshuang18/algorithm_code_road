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

    for (int i = 0; i < n; i++)//遍历第一个加数
    {
        for (int j = i + 1; j < n; j++)//遍历第二个加数
        {
            int sum = a[i] + a[j];//对其求和

            for (int k = 0; k < n; k++) // 遍历和
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