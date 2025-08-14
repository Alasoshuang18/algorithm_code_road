#include<iostream>
using namespace std;
int main()
{
    int x = 1,sum = 1;//表示第一层的个数
    int n;cin>>n;
    for(int i = 2;i <= n;i++)
    {   
        x = x + i;
        sum += x;
    }
    cout<<sum<<"\n";
    return 0;
}