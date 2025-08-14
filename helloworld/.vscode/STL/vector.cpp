#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;
    a.push_back(1);
    a.push_back(1);
    int num;
    cin>>num;
    if(num > 2)
    {
        for(int i = 2;i < num;i++)
        {
            a.push_back(a[i-1]+a[i-2]);
        }
    }
    cout<<a[num-1];
    return 0;
}