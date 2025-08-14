#include<iostream>
using namespace std;
int maxx(int n,int x,int y)
{
    if(x < y)
    {
        int cnt = n / x;
        int save = n - cnt * x;
        int tomo = cnt * y;
        int sum = save + tomo;
        return sum;
    }else{
        return n;
    }
}
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    cout<<maxx(n,x,y);

    return 0;
}