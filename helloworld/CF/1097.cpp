#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N = 20;
int a[N];

int main()
{
    int n,sum;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // ö������״̬
    for (int i = 1; i < (1 << n); i++)// i �� 1 �� 2^n-1����ʾ���зǿ��Ӽ�
    {
        sum = 0;
        for (int j = 0; j < n; j++)//ö�� n ����
        {
            if (i & (1 << j))
            {
                sum += a[j + 1];
            }
            else
            {
                sum -= a[j + 1];
            }    
        }
        if (sum == 0 || sum % 360 == 0)
        {
            cout << "YES" << '\n';
            return 0;
        }
    }   
        cout<<"NO"<<'\n';
        return 0;
}