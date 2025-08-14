#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num = 1;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
          printf("%02d",num++);
        }
        printf("\n");
    }
    printf("\n");

    int sum = 1;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n-i;j++)
        {
            printf(" ");
        }
        for(int j = 1;j <= i;j++)
        {
            printf("%02d",sum++);
        }
        printf("\n");
    } 
    return 0;
}