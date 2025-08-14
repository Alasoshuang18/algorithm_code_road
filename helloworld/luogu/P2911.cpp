#include<iostream>
using namespace std;
const int N = 45;
int a[N];//是一个桶，用来记录每一次的和出现的次数
int main()
{
    int s1,s2,s3,maxx = 0,sum = 0;
    cin>>s1>>s2>>s3;
    for(int i = 1;i <= s1;i++)
    {
        for(int j = 1;j <= s2;j++)
        {
            for(int k = 1;k <= s3;k++)
            {
                a[i+j+k]++;
                if(a[i+j+k] > maxx)
                {
                    maxx = a[i+j+k];//表示最大次数
                    sum = i+j+k;
                }
            }
        }
    }
    cout<<sum<<'\n';
    return 0;
}