// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;cin>>t;
//     while(t--)
//     {
//         string s;cin>>s;
//         if(s[0] > s[2])
//         {
//             if(s[1] != '>')
//             {
//                 s[1] = '>';
//             }
//         }
//         else if(s[0] < s[2])
//         {
//             if(s[1] != '<')
//             {
//                 s[1] = '<';
//             }
//         }
//         else
//         { 
//             if(s[1] != '=')
//             {
//                 s[1] = '=';
//             }
//         }
//         cout<<s<<"\n"; 
//     }
   
//     return 0;
// }

#include<iostream>
using namespace std;
const int N = 510;
char d[N][5];
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        for(int i = 1;i <= n;i++)
        {
            cin>>d[i];
        }

        for(int i = n;i >= 1;i--)
        {
            for(int j = 0;j < 4;j++)
            {
                
                if(d[i][j] == '#'){cout<<j + 1<<" ";break;}
            }
        }
        cout<<"\n";
    }
    
    return 0;
}