// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main()
// {
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     ll n;cin>>n;
//     ll sum = 0,tmp = n;
//     //��tmp����n ���в���,Ҫ��Ȼ��������������,n��ֱֵ�ӱ��ı���
//     while(tmp > 0)
//     {
//        sum += tmp % 10;
//        tmp /= 10;
//     }

   
//     if(n % sum == 0)
//     {
//         cout<<"Yes"<<"\n";
//     }else cout<<"No"<<"\n";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a,int b)
// {
//     if(a == 0)return b;
//     return gcd(b,a % b);
// }
// int lcm(int a,int b)
// {
//     return (a * b) / gcd(a,b);
// }
// int main()
// {
//     int n;cin>>n;
//     for(int i = n;;++i)
//     {
//         if(i % 2 == 0 && i % n == 0)
//         {
//             cout<<i<<"\n";
//             break;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s,t;cin>>s>>t;
//     string new1;
//     new1 = s + s;
//             //new1 = s.back() + s.substr(0, s.size() - 1);
//             if(new1.find(t) != -1)
//             {cout<<"Yes"<<"\n";}
//             else {cout<<"No"<<"\n";}
//         //cout<<s.back();
//     return 0;   
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int cnt = 0;
//     string s;cin>>s;
//     if(s[0] != 'A'){cout<<"WA"<<"\n";return 0;}
//     for(int i = 2;i < s.size() - 1;i++)
//     {
//         if(s[i] == 'C')
//         {
//             cnt++;
//         }  
//     }
//     if(cnt != 1){cout<<"WA"<<"\n";return 0;}
//     for(int i = 1;i < s.size();i++)
//     {
//         if(s[i] != 'C' && !islower(s[i]))
//         {
//             cout<<"WA"<<"\n";
//             return 0;
//         }
//     }   
//     cout<<"AC"<<"\n";


//     return 0;
// }

//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
    //int n,k,num = 0;cin>>n>>k;
    //if(n % k == 0)
    //{cout<<0<<"\n";return 0;}
    //����ֱ�ӿ���ͨ���۲�ʽ�Ӽ������
    //��Ϊ������ȫ��һ�����������ֵ����Сֵֻ���1
    //else  cout<<1<<"\n";
        // int sum = n / k;
        // int sum2 = sum;
        // sum2 += n % k;
        // num = sum2 - sum;
       

    //cout<<abs(num)<<"\n";
    //return 0;
//}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     bool flag = false;
//     for(int x = 0;x < n/4;x++)
//     {
//         if((n - 4 * x) % 7 == 0)//�ж��Ƿ�Ϊ����
//         {
//             flag = true;
//             break;
//         }
//     }
//     if(flag)
//     {
//         cout<<"Yes"<<"\n";
//     }else cout<<"No"<<"\n";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
const int N = 3;
vector<bool> dp(N+1);
int main()
{
    int n;cin>>n;
    dp[0] = true;
    for(int i = 1;i <= n;i++)
    {
        if(i >= 4 && dp[i-4])
        {
            dp[i] = true;
        }
        if(i >= 7 && dp[i-7])
        {
            dp[i] = true;
        }
    }   
    if(dp[n])cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    return 0;
}
