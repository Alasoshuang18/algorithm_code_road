#include<iostream>
using namespace std;
void swap1(int &ar,int &br)
{
    int tmp = ar;
    ar = br;
    br = tmp;
}
int main()
{
    int a = 10,b = 20;
    swap1(a,b);
    cout<<a<<" "<<b<<"\n";

    return 0;
}