#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int sum = 0,cnt = 0;
    for(int a = 1;a <= 3;a++)
    {
        for(int b = 1;b <= 3;b++)
        {
            for(int c = 1;c <= 3;c++)
            {
                for(int d = 1;d <= 3;d++)
            {
                for(int e = 1;e <= 3;e++)
                {
                    for(int f = 1;f <= 3;f++)
                    {
                        for(int g = 1;g <= 3;g++)
                        {
                            for(int h = 1;h <= 3;h++)
                            {
                                for(int i = 1;i <= 3;i++)
                                {
                                    for(int j = 1;j <= 3;j++)
                                    {
                                        sum = a + b + c + d + e + f + g + h + i + j;
                                        if(sum == n)cnt++; 
                                    }   
                                }   
                            }   
                        }   
                    }   
                }
            }
        }
    }
}
    cout<<cnt<<"\n";
    for(int a = 1;a <= 3;a++)
    {
        for(int b = 1;b <= 3;b++)
        {
            for(int c = 1;c <= 3;c++)
            {
                for(int d = 1;d <= 3;d++)
            {
                for(int e = 1;e <= 3;e++)
                {
                    for(int f = 1;f <= 3;f++)
                    {
                        for(int g = 1;g <= 3;g++)
                        {
                            for(int h = 1;h <= 3;h++)
                            {
                                for(int i = 1;i <= 3;i++)
                                {
                                    for(int j = 1;j <= 3;j++)
                                    {
                                        sum = a + b + c + d + e + f + g + h + i + j;
                                        if(sum == n)
                                        cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<"\n";
                                    }   
                                }   
                            }   
                        }   
                    }   
                }
            }
        }
    }
}
    return 0;
}