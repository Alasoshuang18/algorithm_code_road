#include<iostream>
using namespace std;
int main()
{
    int cnt = 0;
    string f,z;
    cin>>z>>f;
    string res;//????????
    for(int i = 0;i < f.size();i++)
    {
        res = f.substr(i,z.size());
        //cout<<res<<"\n";
        if(res == z)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
    return 0;
}