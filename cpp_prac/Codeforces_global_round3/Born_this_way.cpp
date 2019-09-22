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
    ll n , m , ta , tb , k , l, flag = 0;
    cin>>n>>m>>ta>>tb>>k;
    vector<ll> a,b;
    forn(i,n){
        cin>>l;
        a.pb(l);
    }
    forn(i,m){
        cin>>l;
        b.pb(l);
    } 
    vector<ll> times;   
    if(k >= n || k >= m){
        cout<<-1;
        flag = 1;
        //abort();
    }
    else
    {
        for(ll i = k ; i >=0 ; i--){
            ll a_b = a[i] + ta;
            if(a_b > b.back()){
                cout<<-1;
                flag = 1;
                break;
            }
            vector<ll>::iterator upper;
            upper = upper_bound(all(b),a_b);
            ll pos = upper - b.begin();
            /*if(pos >= b.size()){
                cout<<-1;
                flag = 1;
                break;
            }*/
            if(b[pos-1] == a_b)
                pos--;
            pos = pos + k - i;
            if(pos >= b.size()){
                cout<<-1;
                flag = 1;
                break;
            } 
            ll b_c = b[pos] + tb;
            times.pb(b_c);
        }
    }
    if(flag == 0){
        sort(all(times));
        cout<<times.back();
    }
}