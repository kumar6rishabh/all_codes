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
int occurence(vector<int> v[] , int t , int m)
{
    forn(i,m){
        forn(j,v[i].size()){
            if(v[i][j] == t)
                return i;
        }
    }
    return -1;
}

int main()
{
    ll m,n;
    cin>>n>>m;
    vector<int> v[m];
    ll temp = m,t = -1;
    while(temp--){
        t++;
        ll s;
        cin>>s;
        while(s--){
            ll k;
            cin>>k;
            v[t].pb(k);
        }
        sort(all(v[t]));
    }
    for1(i,n+1){
        int o = occurence(v,i,m);
        //cout<<"o is "<<o<<endl;
        if(o == -1){
            cout<<1<<" ";
            continue;
        }
        vector<int> tog;
        vector<int> temp;
        forn(j,v[o].size()) tog.pb(v[o][j]);
        //dispv(tog);
        //cout<<endl;
        //sort(all(tog));
        //dispv(tog);

        vector<int>::iterator ls,lp;
        forn(j,m){
            if(j != o){
                //cout<<j;
                ls = set_intersection(all(tog),all(v[j]),temp.begin());
                cout<<"hello";
                if(ls-temp.begin()){
                    merge(all(v[j]),all(tog),temp.begin());
                    lp = unique(all(temp));
                    temp.resize(distance(temp.begin(),lp));
                    tog.clear();
                    tog.assign(all(tog));
                }
            }
        }
        vector<int>::iterator h;
        for(h = tog.begin() ; h != tog.end() ; h++);
            cout<<tog.size()<<" ";
    }
}