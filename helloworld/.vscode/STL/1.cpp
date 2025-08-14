#include <iostream>
using namespace std;
int main()
{
    int x = 6;
    for (int i = 0; i <= 3; i++)
    {
        cout << (x >> i & 1);
    }
    return 0;
}