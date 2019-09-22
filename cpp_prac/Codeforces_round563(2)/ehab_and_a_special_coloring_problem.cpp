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

bool prime(ll n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 
ll prime_no(ll i)
{
    for(ll j = 2 ; j < i+2 ; j++){
        if((i+2) % j == 0)
            return j;
    }
}

int main()
{
    ll n;
    cin>>n;
    vector< pair<ll,ll> > v;
    ll c = 0;
    for(ll i = 2 ; i <= n ; i++){
        if(prime(i)){
            v.pb(mp(i,++c));
        }
        else if(i %2 == 0)
            v.pb(mp(i,1));
        else
            v.pb(mp(i,0));
    }
    forn(i,v.size()){
        if(v[i].se == 0){
            v[i].se = v[prime_no(i) - 2].se;
        }
    }
    forn(i , v.size()) cout<<v[i].se<<" ";
}