//我的思路：先把他转成数字形式给另一个数组再去求和
//但实际上好像不需要再来一个数组存放它

#include<iostream>
#include<cstring>
using namespace std;
const int N = 201;
char a[N];
int main()
{
//忘记读入数组啦！！！
    int sum = 0;
    cin>>a;
    int len = strlen(a);
    for(int i = 0;i < len;i++)
    {
        cin>>a[i];
        sum = sum + (a[i] - '0');
    }
    cout<<sum;
    return 0;
} 

/* #include<iostream>
#include<cstring>
using namespace std;
const int N = 201;
char a[N];
int main()
{
    int sum = 0;
    string s;
    cin>>s;
    for(int i = 0;i < s.size();i++)
    {
        sum += (s[i] -'0');
    }
    cout<<sum;
    return 0;
} */