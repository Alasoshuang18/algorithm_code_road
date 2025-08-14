//模拟 k * x 的结果，将其值与maxx擂台比较，如果比他大，交换二值，下标进行更新
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int sum = 0;
    while(t--)
    {
        int n;cin>>n;
        int maxx = 0,maxx_id = -1;
        for(int x = 2;x <= n;x++)
        {
            int sum = 0;
            for(int k = 1;k * x <= n;k++)
            {
                    sum += k * x;
            }
        if(sum > maxx)
        {
            maxx = sum;
            maxx_id = x;
        }
    }  
        cout<<maxx_id<<"\n";
    }
    return 0;
}