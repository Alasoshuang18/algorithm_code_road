//ѡ�������˼·:�����������ҵ�һ����ֵ��Ȼ������ŵ�������
#include<iostream>
#include<algorithm>
using namespace std;
const int N = 10010;
int a[N];
void choose_sort(int a[],int n)
{
    for(int i = 1;i < n;i++)//ע�����ﲻ��Ҫ ������ n
    {
        int p = i;
        for(int j = i + 1;j <= n;j++)
        {
            if(a[j] < a[p])
            {
                p = j;
            }
            //������������±꼴��
        }
        swap(a[i],a[p]);
    }
    
}
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)cin>>a[i];
    choose_sort(a,n);
    for(int i = 1;i <= n;i++)cout<<a[i]<<" ";
    return 0;
}