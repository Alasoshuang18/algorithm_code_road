// ��������Ҫ����Ҫ:
// ѡ���׼��
// �ݹ�������������
#include <iostream>
using namespace std;
const int N = 10010;
int a[N];
// void quick_sort(int *a,int l,int r)
// {
//     //�ݹ鴦��
//     //Ѱ�ұ߽�
//     if(l >= r)return;
//     int i = l+1,j = l+1;
//     while(j <= r)
//     {
//         if(a[j] < a[l])
//         {
//             swap(a[i],a[j]);
//             i++;
//         }
//         j++;
//     }
//     //���»�׼��
//     swap(a[i-1],a[l]);
//     quick_sort(a,l,i-2);//�ݹ�������
//     //ע��:i-1������׼���Լ���ֵ
//     //����i-2��ʾ����ߵ�����ֵ
//     quick_sort(a,i,r);//�ݹ�������
// }
//�Ż����������
void quick_sort(int *a, int l, int r)
{
    if (l >= r)
        return;
    int i = l, j = r;
    int tmp = a[l];
    while (i < j)
    {
        //�����ұ߽�(���������߽�ᵼ��a[j]��ֵ�����ǵ���ԭʼ���ݱ��޸�)
        while (i < j && a[j] >= tmp)--j;
        a[i] = a[j];
        // ������߽�
        while (i < j && a[i] <= tmp)++i;
        a[j] = a[i];
    }
    a[i] = tmp;
    quick_sort(a,l,i-1);
    quick_sort(a,i+1,r);
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    quick_sort(a, 1, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}