#include<iostream>
using namespace std;
int n;
int sum;
void f(int i)
{
    
    if(i <= n)
    {
        //cout<<i<<"\n";
        sum = sum+i;
        f(i+1);
    }
}
int main()
{
    cin>>n;
    f(1);
    cout<<sum<<"\n";
    return 0;
}