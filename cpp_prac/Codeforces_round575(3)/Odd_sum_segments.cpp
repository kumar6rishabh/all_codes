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
    ll q , n , k , t;
    cin>>q;
    while(q--){
        cin>>n>>k;
        ll flag = 0;
        vector<ll> v;
        v.clear();
        forn(i , n){
            cin>>t;
            v.pb(t);
        }
        if(k == n){
            forn(i,n) {
                if(v[i] %2 == 0){
                    flag = 1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flag == 0){
                cout<<"YES"<<endl;
                for1(i , n+1) cout<<i<<" "; 
                cout<<endl;
            }
        }
        else{
            vector< pair<ll , ll> > odd;
            forn(i , n) if(v[i] %2 == 1) odd.pb(mp(v[i] , i));
            if(k > odd.size()){
                cout<<"NO"<<endl;
                flag = 1;
            }
            else if((k%2 == 0) &&(odd.size()%2 == 1)){
                cout<<"NO"<<endl;
                flag = 1;
            }
            else if((k%2 == 1) && (odd.size()%2 == 0)){
                cout<<"NO"<<endl;
                flag = 1;
            }
            else{
                cout<<"YES"<<endl;
                forn(i , k-1){
                    cout<<odd[i].se + 1<<" ";
                }
                cout<<n<<endl;
            }
        }
    }
}