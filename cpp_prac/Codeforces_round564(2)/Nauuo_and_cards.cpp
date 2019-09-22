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
ll numb(vector<ll> &pile , ll len , ll n){
    if((pile[n-1-len]+len+1)%n == 0){
        return n;
    }
    else
        return ((pile[n-1-len]+len+1)%n);
}

int main()
{
    ll n;
    cin>>n;
    vector<ll> hand,pile;
    ll temp = n, k;
    while(temp--){
        cin>>k;
        hand.pb(k);
    }
    temp = n;
    while(temp--){
        cin>>k;
        pile.pb(k);
    }
    ll c = 0;
    //cout<<(is_sorted(all(pile)));
    while(!(((accumulate(all(hand),0)) == 0) && (is_sorted(all(pile))))){
        c++;
        ll t = n-1,len = 0;
        while(pile[t--] == 0)
            len++;
        ll num = numb(pile,len,n);
        ll fr = pile[0];
        vector<ll>::iterator it;
        it = pile.begin();
        pile.erase(it);
        it = find(all(hand),num);
        if(it != hand.end()){
            hand.erase(it);
            hand.pb(fr);
            pile.pb(num);
        }
        else{
            it = find(all(hand),0);
            hand.erase(it);
            hand.pb(fr);
            pile.pb(0);
        }
        dispv(hand);
        cout<<"hand"<<"       "<<"pile";
        dispv(pile);
        cout<<endl;
        if(c == 4)
            break;
    }
    //cout<<c;
}