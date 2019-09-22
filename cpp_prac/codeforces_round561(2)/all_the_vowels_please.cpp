#include<bits/stdc++.h>

#define forn(i,n) for(int i = 0 ; i < (int)n ; i++)
#define for1(i,n) for(int i = 1 ; i < (int)n ; i++)
#define get1(a) scanf("%d", &a)
#define get2(a , b) scanf("%d%d", &a , &b)
#define get3(a , b , c) scanf("%d%d%d", &a , &b , &c)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define dispa(arr) for(auto i : arr) cout<<i<<" ";
#define dispv(v) for(auto i : v) cout<<i<<" ";
#define Max(arr) *max_element(arr,arr + sizeof(arr)/sizeof(arr[0]));  // only for main function
#define Min(arr) *min_element(arr,arr + sizeof(arr)/sizeof(arr[0]));  // only for main function

using namespace std;

int main()
{
    int k,i,j,flag = 0,m,n;
    cin>>k;
    if(k < 25)
        cout<<-1;
    else
    {
        string st = "aeiou";
        for(i = 5 ; i <= 2000 ; i++)
        {
            for(j = 5 ; j <= 2000 ; j++)
            {
                if(i*j > k)
                    break;
                if(i*j == k)
                {
                    flag = 1;
                    break;
                }
            }
            if(i*5 > k)
            {
                cout<<-1;
                break;
            }
            if(flag == 1)
                break;
        }
        if(flag == 1)
        {
            m = i;
            n = j;
            for(i = 0 ; i < m ; i++)
                for(j = 0 ; j < n ; j++)
                    cout<<st[(i+j)%5];
        }
    }
       
}