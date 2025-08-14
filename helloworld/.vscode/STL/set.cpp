#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(111);
    s.insert(222);
    s.insert(333);
    s.insert(444);
    cout<<s.size()<<"\n";


    set<int>::iterator it;
    for(it = s.begin();it != s.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}