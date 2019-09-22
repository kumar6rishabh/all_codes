#include<bits/stdc++.h>

#define forn(i,n) for(long long int i = 0 ; i < (long long int)n ; i++)
#define for1(i,n) for(long long int i = 1 ; i < (long long int)n ; i++)
#define get1(a) scanf("%lld", &a)
#define get2(a , b) scanf("%lld%lld", &a , &b)
#define get3(a , b , c) scanf("%lld%lld%lld", &a , &b , &c)
#define mp make_pair
#define pb push_back
#define ll long long int 
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
    ll q,n;
    cin>>q;
    ll temp = q;
    while(temp--){
        cin>>n;
        ll c = 0;
        while(n%3 == 0){
            n = (2*n)/3;
            c++;
        }
        while(n%5 == 0){
            n = (4*n)/5;
            c++;
        }
        while(n%2 == 0){
            n = n/2;
            c++;
        }
        if(n != 1)
            cout<<-1<<endl;
        else
            cout<<c<<endl;
    }
}