#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
const int N = 15;
int a[N];
int main()
{
    int height,cnt = 0;
    for(int i = 1;i <= 10;i++)
    {
        cin>>a[i];
    }
    cin>>height;
    int sumH = height + 30;
    for(int i = 1;i <= 10;i++)
    {
        if(a[i] <= sumH)
        {
            cnt++;
        }
    }

    cout<<cnt<<'\n';

    return 0;
}