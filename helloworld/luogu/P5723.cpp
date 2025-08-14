#include<iostream>
using namespace std;
bool isPrime(int n)
{
    for(int i = 2;i * i <= n;i++)
    {
        if(n % i == 0)return false;
    }
    return true;
}
int main()
{
    int l;
    int sum = 0;
    int cnt = 0;
    cin>>l;
    for(int i = 2;sum + i <= l;i++)
    {
        if(isPrime(i))
        {
            sum += i;
            cnt++;
            cout<<i<<'\n';
        }
    }
    cout<<cnt<<'\n';
        

    return 0;
}