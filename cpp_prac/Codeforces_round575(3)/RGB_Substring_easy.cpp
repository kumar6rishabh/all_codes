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
    ll q;
    cin>>q;
    while(q--){
        ll n , k;
        cin>>n>>k;
        vector<char> s[n - k + 1];
        string s1;
        cin>>s1;
        string rgb = "";
        forn(i , 668)
            rgb += "RGB";
        forn(i , n-k+1){
            ll ma;
            ma = i;
            string st = "";
            forn(j , k) st += s1[j+i];
            //cout<<st<<endl;
            forn(j , st.length()) s[i].pb(st[j]);
        }
        ll minn = 2000 , m;
        forn(i , n - k + 1){
            ll count_1 = 0 , count_2 = 0 , count_3 = 0;
            forn(j , s[i].size()){
                if(s[i][j] != rgb[j])
                    count_1++;
                if(s[i][j] != rgb[j+1])
                    count_2++;
                if(s[i][j] != rgb[j+2])
                    count_3++;
            }
            m = min(count_1 , min(count_2 , count_3));
            if(m < minn)
                minn = m;
        }    
        cout<<minn<<endl;
    }
}
