#include<iostream>
#include<fstream>
using namespace std;
void solve()
{
    ofstream off;
    off.open("C:/Users/Alaso/Desktop/test.txt",ios::out);
    off << "Alaso_shuang,Happy birthday"<<"\n";
    off << "愿你每一次的笑容，都是真心的！";
    off.close();
}
int main()
{
    solve();
    return 0;
}