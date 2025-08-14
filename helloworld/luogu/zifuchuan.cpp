#include<iostream>
#include<cstring>
using namespace std;
const int N = 5e5+10;
char a[N],b[N];
int main()
{
    cin>>a>>b;
    int lena = strlen(a);
    int lenb = strlen(b);
    int flag = 0;
    for(int i = 0;i < lena;i++)
    {
        flag = 1;
        for(int j = 0;j < lenb;j++)
        {
            if(a[i+j] == b[j])
            {
                continue;
            }
            else 
            {
                flag = 0;
                break;
            }
        }
        if(flag) break;
    }
    if(flag == 1)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}