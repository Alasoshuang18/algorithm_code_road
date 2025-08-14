#include<iostream>
#include<algorithm>
using namespace std;
int a[1100];
int ls[] = {6,2,5,5,4,5,6,3,7,6};
int main()
{
    int n;cin>>n;
    int cnt = 0;
    a[0] = 6; // 初始化数字 0 的火柴棒数量
    // for(int i = 1;i <= 10;i++)
    // {
    //     for(int j = 1;j <= 10;j++)
    //     {
    //         for(int z = 1;z <= 10;z++)
    //         {
    //             if(i + j == z && a[i] + a[j] + a[z] == n-4 && i != j)cnt++;
    //         }
    //     }
    // }
    //预处理每一个数字对应的火柴棒数量
    for(int i = 1;i <= 1000;i++)
    {
        a[i] = 0;
        int num = i;
        while(num > 0)
        {
            a[i] += ls[num % 10];
            num /= 10;
        }
    }
    for(int i = 0;i <= 1000;i++)
    {
        for(int j = 0;j <= 1000;j++)
        {
            int z = i + j;
            if(z <= 1000 && a[i] + a[j] + a[z] == n-4)
            {
                if(!(i == 0 && j == 0))cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}