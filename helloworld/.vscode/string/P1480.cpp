// 注意尽量避免使用循环，避免不必要的数组（比如你读入了一些数（在数组里面的）
// 但是你后续不用这个数组，只是求类似于最大值和最小值
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 300;
char a[N];
int main()
{
    int n;
    cin >> n;
    string minn, s;
    cin >> minn; // 先读入第一个字符串，把它暂时作为最小的字符串
    for (int i = 2; i <= n; i++)
    {
        cin >> s;
        if (minn > s)
            minn = s;
    }
    cout << minn;
    return 0;
}