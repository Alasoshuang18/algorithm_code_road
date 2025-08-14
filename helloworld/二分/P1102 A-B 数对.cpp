// 我会写暴力啦！！！
// 暴力 75pts
//  #include<iostream>
//  #include<cmath>
//  using namespace std;
//  const int N = 2e5+10;
//  int a[N];
//  int main()
//  {
//      int n,c,cnt = 0;
//      cin>>n>>c;
//      for(int i = 1;i <= n;i++)
//      {
//          cin>>a[i];
//      }
//      for(int i = 1;i <= n;i++)
//      {
//          for(int j = i+1;j <= n;j++)
//          {
//              if(abs(a[i] - a[j]) == c)cnt++;
//          }
//      }
//      cout<<cnt<<"\n";
//      return 0;
//  }
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
const int N = 2e5 + 10;
int a[N];
int n, c;
int erfenzuo(int x)
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (a[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    if (a[l] == x)
        return l;
    return -1;
}
int erfenyou(int x)
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r + 1) >> 1;
        if (a[mid] <= x)
            l = mid;
        else
            r = mid - 1;
    }
    if (a[r] == x)
        return r;
    return -1;
}
int main()
{
    cin >> n >> c;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) // 枚举1-n个数作为B，寻找A = B+C的数量
    {
        int A = a[i] + c;
        int l = erfenzuo(A);
        int r = erfenyou(A);
        if (l != -1 && r != -1)
            sum += r - l + 1;
    }
    cout << sum << "\n";

    return 0;
}