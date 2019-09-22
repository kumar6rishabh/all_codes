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
    ll n,k,t,c = 0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        c = 0;
        ll d;
        while(n != 0){
            if(n < k){
                c += n;
                break;
            }
            if(n%k != 0){
                d = n - ((ll)(n/k))*k;
                c += d;
                n = n - d;
            }else{
                while(n%k == 0){
                    n = n/k;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}