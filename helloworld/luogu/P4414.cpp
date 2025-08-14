#include<iostream>
using namespace std;
int main()
{
    char zf[5];
    int a,b,c;
    cin>>a>>b>>c;
    if(a > b)swap(a,b);
    if(a > c)swap(a,c);
    if(b > c)swap(b,c);
    cin>>zf;
    for(int i = 0;i < 3;i++)
    {
        if(zf[i] == 'A')
        {
            cout<<a<<" ";
        }
        if(zf[i] == 'B')
        {
            cout<<b<<" ";
        }
        if(zf[i] == 'C')
        {
            cout<<c<<" ";
        }
    }
    
    return 0;
}