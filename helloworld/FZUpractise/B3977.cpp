// // ˼·:��һ����ά���������,�ֱ��ҵ���x�к͵�y��
// #include <iostream>
// #include <algorithm>
// #include <cstring>
// using namespace std;
// const int N = 1e5 + 10;
// int a[N][N],H[N],L[N];
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     char op[3];
//     int x, y;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//      for(int i = 0;i < n;i++)
//         {
//             H[i] = i;
//             L[i] = i;
//         }
//     while (m--)
//     {
//         cin >> op >> x >> y;
//     //     x--;y--;
//     //     if (op[0] == '1')
//     //     {
//     //         // ����x,y��,��Ҫ��֤jһֱ����˳���ڱ�ģ����α�����ȥ
//     //         for (int j = 0; j < n; j++)
//     //         {
//     //             swap(a[x][j], a[y][j]);
//     //         }
//     //     }
//     //     else if (op[0] == '0')
//     //     {
//     //         for (int i = 0; i < n; i++)
//     //         {
//     //             swap(a[i][x], a[i][y]);
//     //         }
//     //     }
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         cout << a[i][j] << " ";
//     //     }
//     //     cout << "\n";
//     // }
//}
//     //����д���ᳬʱ,��ΪO(m * n)�����ݷ�Χ��m��ܴ�
//     //�����Ҳο���һЩ���ϵ����ϣ��˽⵽ֱ����ӳ��ͺ���,��Ҫ�������к��д�������
//     return 0;
// }

// ˼·:��һ����ά���������,�ֱ��ҵ���x�к͵�y��
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N = 1e4 + 10;
int a[N][N], Hang[N], Lie[N];
int main()
{
    int n, m;
    cin >> n >> m;
    char op[3];
    int x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        Hang[i] = i;
        Lie[i] = i;
    }

    while (m--)
    {
        cin >> op >> x >> y;
        x--;
        y--;
        if (op[0] == '1')
        {
            swap(Hang[x], Hang[y]);
        }
        else if (op[0] == '0')
        {
            swap(Lie[x], Lie[y]);
        } // ����ע��,op[1]�����ǿյ�
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[Hang[i]][Lie[j]] << " ";
        }
        cout << "\n";
    }
    return 0;
}