#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifs;
    ifs.open("C:/Users/Alaso/Desktop/test.txt",ios::in);
    //��Ҫ��һ���ж�
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
Ը��ÿһ�ε�Ц�ݣ��������ĵģ�
*/