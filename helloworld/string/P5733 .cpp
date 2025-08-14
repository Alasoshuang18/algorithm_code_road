#include<iostream>
#include<cstring>
using namespace std;
const int N = 100;
char a[N];
int main()
{
    cin>>a;
    int len = strlen(a);
    for(int i = 0;i <= len;i++)
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }

    }
    cout<<a<<'\n';
    return 0;
}