#include<bits/stdc++.h>
using namespace std;
const int N = 1100;
vector<int> rever(N);
int n;
//��û�п��ǿ�����ӵ�i����ĺϷ����֣�
// int ban = n / 2;
// int f(int i,int p)
// {
//     int cnt = 0;
//     if(i <= ban)
//     {
//         cnt ++;
//         return f(i/2,p);
//     }
//     else 
//     {
//         cnt ++;
//         return f(i/2,p+1);
//     }
//     return cnt;
// }
int f(int i)
{
    if(i == 1)return 1;
    if(rever[i] != 0) return rever[i];//����Ѿ��������ֱ�ӷ��ؽ��
    //����ÿ������ i���ݹ麯�����μ�����ͬ�������⣬����ʱ�临�Ӷȳ�ָ����������
    int cnt = 1;
    //cnt = 1;//���������һ����Ч����
    for(int j = 1;j <= i/2;j++)//ö�ٺ�ߵĺϷ�����
    {
        
        cnt += f(j);
    }
    rever[i] = cnt;
    return cnt;
}
//��Ҫ�ϼ��仯����

int main()
{
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}