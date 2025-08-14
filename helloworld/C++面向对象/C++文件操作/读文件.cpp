#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("C:/Users/Alaso/Desktop/test.txt",ios::in);
    //需要加一层判断
    if(!ifs.is_open())
    {
        cout<<"No entry"<<"\n";
    }

    string s;
    while(getline(ifs,s));
    {
        cout<<s<<" ";
    }

    return 0;
}
/*
Alaso_shuang,Happy birthday
愿你每一次的笑容，都是真心的！
*/