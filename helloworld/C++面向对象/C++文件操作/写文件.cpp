#include<iostream>
#include<fstream>
using namespace std;
void solve()
{
    ofstream off;
    off.open("C:/Users/Alaso/Desktop/test.txt",ios::out);
    off << "Alaso_shuang,Happy birthday"<<"\n";
    off << "Ը��ÿһ�ε�Ц�ݣ��������ĵģ�";
    off.close();
}
int main()
{
    solve();
    return 0;
}