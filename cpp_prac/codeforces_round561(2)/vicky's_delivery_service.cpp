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
void addEdge(vector<pair <int , int> > v[] , int x , int y , int z)
{
    v[x].pb(mp(y,z));
    v[y].pb(mp(x,z));
}
bool connected(int x , int y)
{
    
}
bool color()
{

}
int main()
{
    ll n,m,c,q,temp;
    cin>>n>>m>>c>>q;
    vector<pair <int , int> > v[n];
    temp = m;
    while(temp--){
        ll x,y,z;
        cin>>x>>y>>z;
        addEdge(v,x,y,z);
    }
    while(q--){
        char c;
        cin>>c;
        if(c == '+'){
            ll x,y,z;
            cin>>x>>y>>z;
            addEdge(v,z,y,z);
        }
        else{
            ll x,y;
            cin>>x>>y;
            if(x < y){
                if(connected(x,y) && color())
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
        }
    }
}