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
    cin>>n>>m;
    vector<ll> v[n+2],r[n],l[n];
    vector< pair<ll,ll> > p;
    forn(i,n){
        forn(j,m){
            r[i].pb(0);
        }
    }
    forn(i,n){
        v[i+1].pb(0);
        forn(j,m){
            cin>>k;
            l[i].pb(k);
            v[i+1].pb(k);
        }
        v[i+1].pb(0);
    }
    forn(i,m+2){
        v[0].pb(0);
        v[n+1].pb(0);
    }
    ll tot = 0;
    forn(i,n+2){
        tot += accumulate(all(v[i]),0);
    }
     ll flag = 0;
    if(tot == 0){
        flag = 1;
        cout<<0;
    }
    if(tot){
        forn(i,n+1){
            forn(j,m+1){
                if(v[i][j] == 1){
                    //cout<<"hi";
                    if(!(((v[i][j+1] == 1) || (v[i][j-1] == 1)) && ((v[i-1][j] == 1) || (v[i+1][j] == 1)))){
                        cout<<-1;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1)
                break;
        }

        if(tot){
            forn(i,n-1){
                forn(j,m-1){
                    if(l[i][j] == 1 && l[i][j+1] == 1 && l[i+1][j] == 1 && l[i+1][j+1] == 1){
                        r[i][j] = 1; r[i][j+1] = 1; r[i+1][j] = 1; r[i+1][j+1] = 1;
                        p.pb(mp(i+1,j+1));
                    }
                }
            }
        }
    }
    if(flag == 0 && tot != 0){
        cout<<p.size()<<endl;
        forn(i,p.size())
            cout<<p[i].fi<<" "<<p[i].se<<endl;
    }
}