#include<iostream>
using namespace std;

const int N = 110;
int a[N][N];

int main() {
    int n;
    scanf("%d", &n);  
    int k = 1;  // �����������
    int t = n;  // �������

    // ����ÿһ��
    for (int i = 0; i < (n + 1) / 2; i++) 
    {
        // ����ϱ߽磨�����ң�
        for (int j = i; j < n - i; j++) 
        {
            a[i][j] = k++;
        }
        
        // ����ұ߽磨���ϵ��£�
        for (int j = i + 1; j < n - i; j++) 
        {
            a[j][n - i - 1] = k++;
        }
        
        // ����±߽磨���ҵ���
        for (int j = n - i - 2; j >= i; j--) 
        {
            a[n - i - 1][j] = k++;
        }
        
        // �����߽磨���µ��ϣ�
        for (int j = n - i - 2; j > i; j--) 
        {
            a[j][i] = k++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
