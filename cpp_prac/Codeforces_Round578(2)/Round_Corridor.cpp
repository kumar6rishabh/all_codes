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
    ll n , m , q;
    cin>>n>>m>>q;
    vector<float> v1 , v2;
    ll i = 0 , j = 0;
    while(i*(360/n) < 360)
        v1.pb((i++)*(360/n));
    while(j*(360/m) < 360)
        v2.pb((j++)*(360/m));
    vector<float>::iterator it;
    forn(k , q){
        vector<float> t1 , t2;
        ll s1 , s2 , e1 , e2;
        cin>>s1>>s2>>e1>>e2;
        if(s1 != 1){
            s1 = 1;
            e1 = 2;
            ll temp = s2;
            s2 = e2;
            e2 = temp;
        }
        if(s1 == 1){
            if(v1[s2-1] < v2[e2-1]){
                t1.assign(v1.begin() + s2 , v1.end());
                t2.assign(v2.begin() , v2.begin() + e2);
                it = set_intersection(all(t1) , all(t2) , t1.begin());
                if((it - t1.begin()) == 0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else if(v1[s2 - 1] > v2[e2 - 1]){
                t1.assign(v1.begin() , v1.begin() + s2);
                t2.assign(v2.begin() + e2 , v2.end());
                it = set_intersection(all(t1) , all(t2) , t1.begin());
                if((it - t1.begin()) == 0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}