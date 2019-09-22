#include<bits/stdc++.h>

#define forn(i,n) for(long long int i = 0 ; i < (long long int)n ; i++)
#define for1(i,n) for(long long int i = 1 ; i < (long long int)n ; i++)
#define get1(a) scanf("%lld", &a)
#define get2(a , b) scanf("%lld%lld", &a , &b)
#define get3(a , b , c) scanf("%lld%lld%lld", &a , &b , &c)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define dispa(arr) for(auto i : arr) cout<<i<<" ";
#define dispv(v) for(auto i : v) cout<<i<<" ";
#define Max(arr) *max_element(arr,arr + sizeof(arr)/sizeof(arr[0]));  // only for main function
#define Min(arr) *min_element(arr,arr + sizeof(arr)/sizeof(arr[0]));  // only for main function
#define ll long long int

using namespace std;

int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll a , b , m,n;
        cin>>a>>b>>m;
        for(n = 0 ; (a+m)*pow(2,n) < b ; n++);
        //n is length
        if(a==b){
            cout<<1<<" "<<a<<endl;
            continue;
        }
        if((a+1)*pow(2,n) > b)
        {
            cout<<-1<<endl;
            continue;
        }
        if( (a+m) > b )
        {
            cout<<2<<" "<<a<<" "<<b<<endl;
            continue;
        }
        cout<<n+2<<" ";
        ll left;
        left = (a+m)*pow(2,n) - b;
        cout<<left<<endl;
        ll arr[n+1];
        forn(i,n+1) arr[i] = m; 
        ll t = 0;
        while(left != 0)
        {
            arr[n-t] = 1;
            left -= ( m-1 );
            t++;
        }
        //cout<<t;
        //forn(i,n+1) cout<<arr[i]<<" ";
        /*ll final[n+2];
        final[0] = a;
        final[n+1] = b;
        forn(i,n) final[i+1] = accumulate(final,final+i+1,0) + arr[i];*/ 
        cout<<a<<" ";
        ll last = a,p;
        forn(i,n+1) {
            if(i == 0){
                p = a + arr[i];
                last = p;
                cout<<p<<" "; 
            }
            else
            {
                p = 2*last + arr[i] - arr[i-1];
                last = p;
                cout<<p<<" ";
            }
            
        }
        //forn(i,n+2) cout<<final[i]<<" "; 
        cout<<endl;
    }
}