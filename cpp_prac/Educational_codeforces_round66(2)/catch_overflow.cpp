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
    ll l,flag = 0;
    ll n;
    vector< pair<char,ll> > v,temp_v;
    vector< vector< pair<char,ll> > > v1;
    cin>>l;
    string st;
    while(l--){
        cin>>st;
        if(st == "add"){
            v.pb(mp('a',0));
        }
        if(st == "for"){
            cin>>n;
            v.pb(mp('f',n));
        }
        if(st == "end"){
            v.pb(mp('e',0));
        }
    }
    ll a = 0,tot = 0;
    ll i=0;
    while(v[i].fi == 'a'){
        a++;
        i++;
    }
    //cout<<a;
    /*forn(i,v.size()) cout<<v[i].fi<<" ";
    cout<<endl;*/
    v.assign(v.begin()+a,v.end());
    /*forn(i,v.size()) cout<<v[i].fi<<" ";
    cout<<endl;*/
    tot = a;
    if(tot > (pow(2,32)-1)){
        cout<<"OVERFLOW!!!";
        flag = 1;
        //break;
    }
    a = 0;
    i = v.size()+1;
    while(v[i].fi == 'a'){
        a++;
    }
    //cout<<a;
    tot += a;
    if(tot > (pow(2,32)-1)){
        cout<<"OVERFLOW!!!";
        flag = 1;
        //break;
    }
    ll count_f = 0 , count_e = 0;
    v.assign(v.begin(),v.end()-a);
    /*forn(i,v.size()) cout<<v[i].fi<<" ";
    cout<<endl;*/
    forn(i,v.size()){
        if(v[i].fi == 'f')
            count_f++;
        if(v[i].fi == 'e')
            count_e++;
        if(count_f == count_e){
            ll h = count_f,j;
            for(j = i - 1 ; j >= 0 ; j--){
                if(v[j].fi == 'f')
                    h--;
                //cout<<"infi";
                if(h == 0)
                    break;
                //cout<<"infi";
            }
            vector<ll> cons;
            ll in_f = 0, in_e = 0;
            for(ll k = j ; k <= i ; k++){
                if(v[k].fi == 'a'){
                    in_f = 0;
                    in_e = 0;
                    for(ll g = j ; g<= k ; g++){
                        if(v[g].fi == 'f'){
                            cons.pb(v[g].se);
                            in_f++;
                        }
                        if(v[g].fi == 'e')
                            in_e++;
                    }
                    forn(q,in_e){
                        cons.pop_back();
                    }
                    ll su = 1;
                    forn(q,cons.size()){
                        su *= cons[q];
                        if(su > (pow(2,32)-1)){
                            cout<<"OVERFLOW!!!";
                            flag = 1;
                            break;
                        }
                    }
                    if(flag == 1)
                        break;
                    tot += su;
                    if(tot > (pow(2,32)-1)){
                        cout<<"OVERFLOW!!!";
                        flag = 1;
                        break;
                    }
                    cons.clear();
                }
            }
            count_f = 0;
            count_e = 0;
        }
        if(flag == 1)
            break;
    }
    if(flag == 0)
        cout<<tot;
}