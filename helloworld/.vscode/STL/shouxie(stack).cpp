#include<iostream>
using namespace std;
const int N = 30;
char d[N];
int tp = 0;
void push(char t)
{
    int x;cin>>x;
    d[++x] = t;
    
}

void pop()
{
    tp--;
}
char top()
{
    return d[tp];
}

bool empty()
{
    if(tp == 0)return 1;
    return 0;
}
int size()
{

}
int main()
{
    char a;
    int x;
    while(cin>>x)
    {

    }

    return 0;
}