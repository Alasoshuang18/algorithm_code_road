//µØÖ·´«µÝ
#include<iostream>
using namespace std;
void swap1(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int a = 10;
    int b = 20;
    swap1(&a,&b);
    cout<<a<<" "<<b<<"\n";

    return 0;
}