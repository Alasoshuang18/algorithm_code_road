#include<iostream>
using namespace std;
bool is_number(int num)
{
    int pos = 1;
    while(num)
    {
        int shu = num % 10;
        if((pos % 2 == 0 && shu % 2 != 0) || (pos % 2 != 0 && shu % 2 == 0))
        {
            return false;
        }
        
        pos ++;
        num /= 10;
    }
    return true;
}
int main()
{
    int n;cin>>n;
    int cnt = 0;
    for(int i = 1;i <= n;i++)
    {
        if(is_number(i))cnt ++;
    }
    cout<<cnt<<"\n";
    return 0;
}