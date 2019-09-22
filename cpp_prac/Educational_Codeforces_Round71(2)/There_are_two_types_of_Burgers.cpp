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
    ll t,b,p,f,h,c;
    cin>>t;
    ll profit = 0;
    while(t--){
        profit = 0;
        cin>>b>>p>>f;
        cin>>h>>c;
        if(h > c){
            if(p >= b/2){
                profit += h*(b/2);
            }
            else{
                profit += h*p;
                b = b - 2*p;
                if(b/2 > f){
                    profit += c * f;
                }
                else{
                    profit += c*(b/2);
                }
            }
        }
        else{
            if(f >= b/2){
                profit += c*(b/2);
            }
            else{
                profit += c*f;
                b = b - 2*f;
                if(p > b/2){
                    profit += h*(b/2);
                }
                else{
                    profit += p*h;
                }
            }
        }
        cout<<profit<<endl;
    }
}