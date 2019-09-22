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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<int> v;
    v.pb(int(s1[0]));v.pb(int(s2[0]));v.pb(int(s3[0]));
    sort(all(v));
    if((s1 ==s2) && (s2 == s3)){
        cout<<0;
    }
    else if((s1[1] == s2[1]) && (s2[1] == s3[1]) && (v[1]==v[0]+1 && v[2] == v[1]+1)){
        cout<<0;
    }
    else if((s1 == s2) || (s2 == s3) || (s1 == s3)){
        cout<<1;
    }
    else if( ((s1[1] == s2[1]) && ((abs(s1[0]-s2[0]) == 1) || (abs(s1[0]-s2[0]) == 2))) || ((s2[1] == s3[1]) && ((abs(s2[0]-s3[0]) == 1) || (abs(s2[0]-s3[0]) == 2))) || ((s1[1] == s3[1]) && ((abs(s1[0]-s3[0]) == 1) || (abs(s1[0]-s3[0]) == 2)))){
        cout<<1;
    }
    else{
        cout<<2;
    }
}