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
    ll q , n , t1 , t2 , a , b , c , d;
    cin>>q;
    while(q--){
        cin>>n;
        vector< pair<ll , ll> > pos;
        vector< ll > v[n];
        forn(i , n){
            cin>>t1>>t2;
            pos.pb(mp(t1 , t2));
            cin>>a>>b>>c>>d;
            v[i].pb(a);v[i].pb(b);v[i].pb(c);v[i].pb(d);
        }
        ll min_x  = (-1)*pow(10 , 5), min_y  = (-1)*pow(10 , 5), max_x = pow(10 , 5), max_y = pow(10 , 5);
        forn(i , n){
            if(v[i][0] == 0 && pos[i].fi > min_x)
                min_x = pos[i].fi;
            if(v[i][1] == 0 && pos[i].se < max_y)
                max_y = pos[i].se;
            if(v[i][2] == 0 && pos[i].fi < max_x)
                max_x = pos[i].fi;
            if(v[i][3] == 0 && pos[i].se >min_y)
                min_y = pos[i].se; 
        }
        if(min_x > max_x || min_y > max_y)
            cout<<0<<endl;
        else{
            ll x_co = floor((min_x + max_x)/2);
            ll y_co = floor((min_y + max_y)/2);
            cout<<1<<" "<<x_co<<" "<<y_co<<endl;
        }
    }
}