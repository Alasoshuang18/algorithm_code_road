#include<bits/stdc++.h>
using namespace std;
const int N = 14;
int year[N] = {31,28,31,30,31,30,31,31,30,31,30,31};
bool is_run(int x)
{
    return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
}
int main()
{
    int d = 0;
    if(is_run(2025))
    {
        year[1] = 29;
    }
    d += 2;
    for(int i = 3;i < 12;i++)
    {
        d += year[i];
    }


    for(int i = 2026;i < 2116;i++)
    {
        if(is_run(i))
        {
            d += 366;
        }else d += 365;
    }
    d += 1;
    cout<<d<<" ";
    return 0;
}