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
    ll n,k;
    cin>>n;
    vector<ll> v;
    ll temp = n;
    while(temp--){
        cin>>k;
        v.pb(k);
    }
    vector< pair<ll,ll> > p;
    ll i = 0 , s = 0;
    while(v[i] != (i+1) || (i!=v.size()-1)){
        if(v[i] ==  (i+1)){
            i++;
            continue;
        }
        if(2*abs(v[i]-1-i) >= n){
            s++;
            p.pb(mp(i,v[i]-1));
            swap(v[i],v[v[i]-1]);
        }
        else if((i < n/2) && ((v[i]-1) <n/2)){
            ll a1,a2,a3;
            a1 = i;
            a2 = v[i] -1;
            a3 = n-1;
            p.pb(mp(min(a1,a3),max(a1,a3)));
            swap(v[a1],v[a3]);
            p.pb(mp(min(a2,a3),max(a2,a3)));
            swap(v[a2],v[a3]);
            p.pb(mp(min(a1,a3),max(a1,a3)));
            swap(v[a1],v[a3]);
            s++;s++;s++;
        }
        else if((i > n/2) && ((v[i]-1) >n/2)){
            ll a1,a2,a3;
            a1 = i;
            a2 = v[i] -1;
            a3 = 0;
            p.pb(mp(a1,a3));
            swap(v[a1],v[a3]);
            p.pb(mp(a2,a3));
            swap(v[a2],v[a3]);
            p.pb(mp(a1,a3));
            swap(v[a1],v[a3]);
            s++;s++;s++;
        }
        else{
            ll a1,a2,a3,a4;
            if(i <= n/2){
                a1 = i;
                a2 = v[i]-1;
                a3 = 0;
                a4 = n-1;
                p.pb(mp(min(a1,a4),max(a1,a4)));
                swap(v[a1],v[a4]);
                p.pb(mp(min(a2,a3),max(a2,a3)));
                swap(v[a2],v[a3]);
                p.pb(mp(min(a3,a4),max(a3,a4)));
                swap(v[a3],v[a4]);
                p.pb(mp(min(a2,a3),max(a2,a3)));
                swap(v[a2],v[a3]);
                p.pb(mp(min(a1,a4),max(a1,a4)));
                swap(v[a1],v[a4]);
                s++;s++;s++;s++;s++;
            }
        }
        if(v[i] == (i+1))
            i++;
    }
    cout<<s<<endl;
    forn(i,p.size()) cout<<p[i].fi+1<<" "<<p[i].se+1<<endl;
    //dispv(v);
}