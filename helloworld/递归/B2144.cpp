//思路:照本宣科
#include<iostream>
using namespace std;
int f(int x,int y)
{
    if(x == 0)return y+1;
    if(x > 0 && y == 0)return f(x-1,1);
    if(x > 0 && y > 0) return f(x-1,f(x,y-1));
    return 0;
    //虽然逻辑上函数f的递归调用最终会返回一个值
    //但编译器无法完全确定这一点
    //通过在函数末尾添加一个默认返回值（如return 0;）
    //可以明确告诉编译器：即使前面的条件都不满足
    //函数仍然会返回一个值。这可以消除编译器的警告
}
int main()
{
    int m,n;cin>>m>>n;
    cout<<f(m,n)<<"\n";
    return 0;
}