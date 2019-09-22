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
    ll n,k;
    get1(n);
    vector<ll> s,t;
    ll temp = n;
    while(temp--){
        get1(k);
        s.pb(k);
    }  
    temp = n;
    while(temp--){
        get1(k);
        t.pb(k);
    }
    vector<ll> te;
    te.assign(all(s));
    sort(all(te));
    ll sm,gr;
    vector< vector<ll> > res;
    vector<ll> tem;
    for(ll i = 0 ; i < n ; i++){
        dispv(s);
        cout<<endl;
        ll num = t[i];
        vector<ll>::iterator it_u,it_l,it;
        it_u = upper_bound(all(te) , num);
        it_l = lower_bound(all(te) , num);
        sm = te[it_l - te.begin()-1];
        gr = te[it_u - te.begin()];
        ll lpos , rpos;
        forn(j,s.size()) if(s[j] == sm){
            lpos = j;
            break;
        }
        forn(j,s.size()) if(s[j] == gr){
            rpos = j;
            break;
        }
        ll d = 0,rem;
        while(!( ((sm+d) == num)  || ((gr-d) == num) )){
            d++;
        }
        if((sm+d) == num)
            rem = sm+d;
        else
            rem = gr-d;
        sm = sm+d;
        gr = gr-d;
        te[it_l - te.begin()-1] = sm;
        te[it_u - te.begin()] = gr;
        s[rpos] = gr;
        s[lpos] = sm;
        /*if(rem == (sm)){
            //dispv(te);
            //cout<<endl;
            for(it = te.begin() ; it != te.end() ; it++){
                if(*it == te[it_l - te.begin()-1])
                    break;
            }
            te.erase(it);
            //dispv(te);
            //cout<<endl;
            //dispv(s);
            //cout<<endl;
            for(it = s.begin() ; it != s.end() ; it++){
                if(*it == s[lpos])
                    break;
            }
            s.erase(it);
            //dispv(s);
            //dispv(s);
        }
        else{
            for(it = te.begin() ; it != te.end() ; it++){
            if(*it == te[it_u - te.begin()])
                break;
            }
            te.erase(it);
            for(it = s.begin() ; it != s.end() ; it++){
                if(*it == s[rpos])
                    break;
            }
            s.erase(it);
        }*/
        tem.pb(lpos);
        tem.pb(rpos);
        tem.pb(d);
        res.pb(tem);
        tem.clear();
    }
    //dispv(s);
    /*sort(all(t));
    sort(all(s));
    if(t == s){
        cout<<"YES"<<endl;
        cout<<res.size()<<endl;
        forn(i,res.size()) cout<<res[i][0]+1<<" "<<res[i][1]+1<<" "<<res[i][2]<<endl; 
    }
    else{
        cout<<"NO";
    }*/
}