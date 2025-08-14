#include<iostream>
using namespace std;

const int N = 110;
int a[N][N];

int main() {
    int n;
    scanf("%d", &n);  
    int k = 1;  // 用来填充数字
    int t = n;  // 计算层数

    // 遍历每一层
    for (int i = 0; i < (n + 1) / 2; i++) 
    {
        // 填充上边界（从左到右）
        for (int j = i; j < n - i; j++) 
        {
            a[i][j] = k++;
        }
        
        // 填充右边界（从上到下）
        for (int j = i + 1; j < n - i; j++) 
        {
            a[j][n - i - 1] = k++;
        }
        
        // 填充下边界（从右到左）
        for (int j = n - i - 2; j >= i; j--) 
        {
            a[n - i - 1][j] = k++;
        }
        
        // 填充左边界（从下到上）
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
