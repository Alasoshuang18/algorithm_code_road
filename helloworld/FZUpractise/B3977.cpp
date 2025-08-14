// // 思路:开一个二维数组存数据,分别找到第x行和第y行
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
//     //         // 交换x,y行,就要保证j一直是有顺序在变的，依次遍历下去
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
//     //上述写法会超时,因为O(m * n)从数据范围看m会很大
//     //于是我参考了一些网上的资料，了解到直接做映射就好了,将要交换的行和列储存起来
//     return 0;
// }

// 思路:开一个二维数组存数据,分别找到第x行和第y行
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
        } // 这里注意,op[1]里面是空的
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