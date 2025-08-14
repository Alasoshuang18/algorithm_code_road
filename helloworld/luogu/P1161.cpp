#include<iostream>
#include<cmath>
using namespace std;
const int N = 5e4+10;
int a[N];//表示判断 开关等（01条件的）
int main()
{
    double a2;
    int t,idx,n;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        cin>>a2>>t;
        for(int j = 1;j <= t;j++)
        {
            idx = (int)(a2 * j);
            if(a[idx])
            {
                a[idx] = 0;
            }else 
            {
                a[idx] = 1;
            }
        }
    }
    for(int i = 0;i < 2000000;i++)
    {
        if(a[i])
        {
        cout<<i<<'\n';
        break;
        }
    }
        

    return 0;
}