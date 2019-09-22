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
bool all_even_or_odd(vector<ll> &v)
{
    if(v[0]%2 == 0){
        forn(i,v.size()) if(v[i]%2 == 1) return false;
    }
    else{
        forn(i,v.size()) if(v[i]%2 == 0) return false;
    }
    return true;
}
bool all_same(vector<ll> &v)
{
    ll temp = v[0];
    forn(i,v.size()) if(v[i] != temp) return false;
    return true;
}

int main()
{
    ll n;
    cin>>n;
    ll temp = n,k = 0;
    vector<ll> v,s,t;
    while(temp--) {
        cin>>k;
        v.pb(k);
    }
    if(all_even_or_odd(v) || all_same(v)){
        dispv(v);
    }
    else{
    sort(all(v));
    dispv(v);
    }
}