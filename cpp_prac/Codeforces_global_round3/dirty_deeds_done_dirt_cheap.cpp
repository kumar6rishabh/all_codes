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
struct ele
{
    ll first;
    ll second;
    ll time;
};

int main()
{
    ll n,k1,k2,g = 0,s = 0;
    get1(n);
    ele gr[2*n] , sm[2*n];
    ll temp = n;
    forn(i,2*n){
        gr[i].first = 0;
        gr[i].second = 0;
        gr[i].time = 0;
        sm[i].first = 0;
        sm[i].second = 0;
        sm[i].time = 0;
    }
    while(temp--){
        get2(k1,k2);
        if(k1 > k2){
            gr[k1-1].first = k1;
            gr[k1-1].second = k2;
            gr[k1-1].time = (g+s+1);
            g++;
        }
        else{
            sm[k2-1].first = k1;
            sm[k2-1].second = k2;
            sm[k2-1].time = (g+s+1);
            s++;
        }
    }
    cout<<endl<<endl;
        //next part
        if(g > s || g == s){
            cout<<g<<endl;
            forn(i,2*n) if(gr[i].first != 0) cout<<gr[i].time<<" ";
        }
        else{
            cout<<s<<endl;
            for(ll i = 2*n-1 ; i>=0 ; i--){
                if(sm[i].first != 0) cout<<sm[i].time<<" ";
            }
        }   
    }
