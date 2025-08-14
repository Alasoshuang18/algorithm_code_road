#include<iostream>
using namespace std;
int main()
{
    int shengyu = 1;
    for(int i = 10;i >= 2;i--)
    {
        shengyu = 2 * (shengyu + 1);
    }
    cout<<shengyu<<"\n";
    return 0;
}

    