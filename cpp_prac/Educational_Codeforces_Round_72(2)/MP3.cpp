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
    ll n , I;
    cin>>n>>I;
    vector< ll > temp , v;
    forn(i , n){
        ll k;
        cin>>k;
        temp.pb(k);
        v.pb(k);
    }
    vector<ll>::iterator it;
    sort(all(temp));
    it = unique(all(temp));
    temp.resize(distance(temp.begin() , it));
    //dispv(temp);
    ll count = 1;
    for(int i = temp.size() ; i > temp.size()-2 ; i--)
        count *= i;
    count /= 2;
    vector< pair< ll , ll> > freq;
    forn(i , temp.size()){
        ll c = count(all(v) , i+1);
        freq.pb(mp(i+1 , c));
    }
    vector< pair<ll , ll> > a[count];
    ll t = 0;
    forn(i , temp.size() - 1){
        for(int j = i + 1 ; j < temp.size() ; j++){
            a[t++].pb(mp(i , j));
        }
    }
    ll K = pow(2,I);
    K += 1;
    forn(i , a.size()){
        ll cnt = 0;
        for(int j = 0 ; j < v.size() ; j++){
            if(v[j] < a[i].fi || v[j] > a[i].se)
                cnt++;
        }
        if(cnt < K)
            break;
    }
}