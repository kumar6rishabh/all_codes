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
    ll n , k;
    cin>>n>>k;
    vector<ll> v,temp;
    forn(i , n){
        ll m;
        cin>>m;
        v.pb(m);
    }
    sort(all(v));
    vector<ll>::iterator it , itf;
    ll flag = 0;
    forn(i , n/2+1){
        it = upper_bound(v.begin() + n/2 , v.end() , v[n/2]);
        itf = v.begin() + n/2;
        ll rem = it - itf;
        if(it == v.end()){
            cout<<v[n/2]+k/(n/2 + 1);
            flag = 1;
            break;
        }
        else if(k - rem*(*it - *itf) >= 0){
            k = k - rem*(*it - *itf);
        }
        else{
            break;
        }
        forn(j , rem)
            v[n/2+j] += *it - *itf;
    }
    if(!flag)
    cout<<v[n/2];
}