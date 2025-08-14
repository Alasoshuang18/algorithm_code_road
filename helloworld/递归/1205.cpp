#include <iostream>
using namespace std;
void hanoi(int n, char a, char b /*�յ���*/, char c /*������*/)
{
    // �������һ�ŵ����
    if (n == 1)
    {
        cout << a << "->" << n << "->" << b <<"\n";
        return;
    }
        
    //���� n-1 �������
    hanoi(n - 1, a, c, b);
    cout << a << "->" << n << "->" << b <<"\n";
    hanoi(n - 1, c, b, a);
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;
    char a, b, c;
    cin >> n >> a >> b >> c;
    hanoi(n, a, b, c);
    return 0;
}