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
    ll n , m;
    cin>>n>>m;
    string st;
    vector< ll > v , mar;
    vector<string> x;
    forn(i , n){
        cin>>st;
        x.pb(st);
    }
    forn(i , m){
        ll k;
        cin>>k;
        mar.pb(k);
    }
    ll score = 0;
    forn(i , m){
        ll c_a = 0 , c_b = 0 , c_c = 0 , c_d = 0 , c_e = 0;
        forn(j , n){
            if(x[j][i] == 'A')
                c_a++;
            else if(x[j][i] == 'B')
                c_b++;
            else if(x[j][i] == 'C')
                c_c++;
            else if(x[j][i] == 'D')
                c_d++;
            else if(x[j][i] == 'E')
                c_e++;
        }
        ll ma = max(c_a , max(c_b , max(c_c , max(c_d , c_e))));
        score += ma*mar[i];
    }
    cout<<score;
}