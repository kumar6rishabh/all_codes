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
    ll n , x , y;
    get3(n , x , y);
    vector<ll> v;
    vector< pair<ll , ll> > sm;
    vector<ll> a[n];
    forn(i , x)
        v.pb(pow(10 , 9)+1);
    forn(i,n){
        ll k;
        cin>>k;
        v.pb(k);
    }
    forn(i , y)
        v.pb(pow(10 , 9)+1);
    forn(i , n){
        a[i].assign(v.begin()+i , v.begin() + i + (x + y + 1));
        /*ll k = i;dispv(a[k]);cout<<endl;*/
    }
    forn(i , n){
        ll min = a[i][0];
        forn(j , x + y + 1){
            if(a[i][j] < min){
                min = a[i][j];
                //cout<<min<<" "<<a[i][j];
            }
        }
        if(min == a[i][x]){
            //cout<<i<<" ";
            cout<<i+1;
            break;
        }
    }
}