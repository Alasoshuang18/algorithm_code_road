#include <iostream>
#include <cstdio>
using namespace std;
int f(int M, int N)
{
    //if(M < 0 || N < 0)return 0;
    if (N == 0 || N == 1)
        return 1;
    if (M == 0 || M == 1)
        return 1;
    if (M < N)
        return f(M, M);
    if (M >= N)
        return f(M, N - 1) + f(M - N, N);

    return 0;
}
int main()
{
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        cout << f(m, n) << "\n";
    }
    return 0;
}