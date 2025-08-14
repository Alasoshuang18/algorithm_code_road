#include <iostream>
#include <deque>
using namespace std;
const int N = 2e6 + 10;
deque<int> deq;
int a[N];
int main()
{
    // �󵥵��ݼ��ĵ�������
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << 0 << "\n";
    for (int i = 2; i <= n; i++) // �� 2 ��ʼ�����������
    {
        while (!deq.empty() && a[deq.back()] > a[i - 1]) // �����˼·�Ƕ�β��ǰһ�������Ƚ�
        {
            deq.pop_back();
        }
        deq.push_back(i - 1);                       // �ѱȽ���ĸ������Ԫ���±�Ž���
        while (!deq.empty() && deq.front() < i - m) // ���ڵ������� ??? ~ i-1 (�������䳤��Ϊ m)
        {
            deq.pop_front();
        }
        cout<<a[deq.front()]<<"\n";
    }

    return 0;
}