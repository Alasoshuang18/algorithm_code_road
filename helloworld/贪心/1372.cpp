// ˼·:������ѡ�����ʱ��������һ��
// �ȶԽ���ʱ���������,���������ʱ�䶨Ϊ����һ����ʼʱ��Աȵ�ʱ��
// �����ʼʱ����ڵ�ǰʱ���򽫽���ʱ�����Ϊ��һ���Ƚ�ʱ��
#include <bits/stdc++.h>
using namespace std;
const int N = 110;
int be[N], en[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> be[i] >> en[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            if (en[j] > en[j + 1])
            {
                swap(en[j], en[j + 1]);
                // ��ʼʱ��Ҳ���Ž���(��������)
                swap(be[j], be[j + 1]);
            }
        }
    }

    //     for(int i = 1;i <= n;i++)
    //     {
    //         cout<<be[i]<<" "<<en[i]<<"\n";
    //     }
    // }
    /*
    1 4
    3 5
    0 6
    5 7
    3 8
    5 9
    6 10
    8 11
    8 12
    2 13
    12 14
    */
    int end = en[1];
    int cnt = 1;                 // ��Ϊ���һ�������Ѿ�ѡ���ȥ��
    for (int i = 2; i <= n; i++) // ����2~n���
    {
        if (be[i] >= end)
        {
            end = en[i];
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}