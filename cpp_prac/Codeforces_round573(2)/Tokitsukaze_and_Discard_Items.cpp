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
    ll n,m,k;
    get3(n,m,k);
    vector<ll> v,s;
    ll temp = m;
    while(temp--){
        cin>>k;
        v.pb(k);
    }
    for1(i,n+1) s.pb(i);
    vector<ll>::iterator it1,it2;
    ll in;
    vector<ll> x(k),y(k);
    ll c = 0;
    while(v.size() != 0){
        it1 = find(all(s),v[0]);
        in = distance(s.begin(),it1);
        in = (in/k)*k;
        s.erase(s.begin(),s.begin()+in);
        ll si_s = s.size(),si_v = v.size();
        it2 = set_intersection(s.begin(),s.begin()+min(k,si_s),v.begin(),v.begin()+min(k,si_v),x.begin());
        x.resize(it2-x.begin());
        it2 = set_difference(s.begin(),s.begin()+min(k,si_s),all(x),y.begin());
        y.resize(it2-y.begin());
        dispv(x);cout<<endl;dispv(y);break;
        s.clear();
        s.assign(all(y));
        y.clear();
        it2 = set_difference(all(v),all(x),y.begin());
        y.resize(it2 - y.begin());
        v.clear();
        v.assign(all(y));
        //dispv(v);cout<<endl;break;
        c++;
    }
    //cout<<c;
}