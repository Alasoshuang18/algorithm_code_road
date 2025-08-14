#include<iostream>
using namespace std;
int cnt = 0;
void f(int n)
{
    if(n != 1)
    {
        if(n % 2 == 0)
        {
            f(n/2);
        }else 
        {
            f(n * 3 + 1);
        }
        cnt++;
    }
    
}
int main()
{
    int n;cin>>n;
    f(n);
    cout<<cnt<<"\n";

    return 0;
}