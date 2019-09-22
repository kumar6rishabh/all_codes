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
    ll n;
    cin>>n;
    ll m;
    if(n%2 == 1)
        m = (n+1)/2;
    else
        m = (n+2)/2;
    cout<<m<<endl;
    for1(i,n+1){
        if(i%2 == 1){
            cout<<((i-1)/2)+1<<" "<<((i-1)/2)+1<<endl;
        }
        else{
            cout<<((i-1)/2)+1<<" "<<((i-1)/2)+2<<endl;
        }
    }
    
}