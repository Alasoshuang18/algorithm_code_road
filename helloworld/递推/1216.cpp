//思路:把上一层的左子和右子进行比较，较大的加在下一层
#include<iostream>
using namespace std;
const int N = 110;
int a[N][N];
int main()
{
    int n;cin>>n;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
        {   
            cin>>a[i][j];
        }
    }

    //递推从倒数第二层开始
    for(int i = n-1;i >= 1;i--)
    {
        for(int j = 1;j <= i;j++)
        {
            if(a[i+1][j] > a[i+1][j+1])
            {
                a[i][j] += a[i+1][j];
            }else a[i][j] += a[i+1][j+1];
        }
    }
    cout<<a[1][1];//输出往上递推的最高层

    
    return 0;
}