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
    ll n,c = 0,k;
    ll rem_1 = 0,rem_2 = 0;
    cin>>q;
    while(q--){
        cin>>n;
        c=0;
        rem_1 = 0;rem_2 = 0;
        while(n--){
            cin>>k;
            if(k%3 == 1)
                rem_1++;
            else if(k%3 == 2)
                rem_2++;
            else
                c++;
        }
        c += min(rem_1,rem_2);
        ll l = max(rem_1,rem_2) - min(rem_1,rem_2);
        c = c + l/3;
        cout<<c<<endl;
    }
    

}