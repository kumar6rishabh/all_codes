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
    ll T;
    cin>>T;
    ll n , m , k , d;
    while(T--){
        cin>>n>>m>>k;
        vector<ll> v;
        forn(i , n){
            cin>>d;
            v.pb(d);
        }

        ll j = 0;
        for(j = 1 ; j < n ; j++){
            if(v[j - 1] >= v[j]){
                m += v[j-1] - v[j] + min(k , v[j]);
            }
            else{   //v[j - 1] < v[j]
                if((m + v[j-1]) < (v[j]-k)){
                    cout<<"NO"<<endl;
                    break;
                }
                else{
                    if((v[j] - v[j - 1]) <= k){
                        m += min(v[j-1] , (k - (v[j] - v[j-1])));
                    }
                    else{
                        m -= (v[j]-v[j-1]-k);
                        if(m < 0){
                            cout<<"NO"<<endl;
                            break;
                        }
                    }
                }
            }
        }
        if(j == n)
            cout<<"YES"<<endl;
    }   
}