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
bool unavailiable(string s)
{
    for(int i = 0 ; i < s.length()-10 ; i++)
        if(s[i] == '8')
            return false;
    return true;
}
string trim(string s)
{
    string st="";
    forn(i,s.length()-1) st += s[i];
    return st;
}
int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        if(s.length()<11 || unavailiable(s) || (s.length() == 11 && s[0] != '8'))
            cout<<"NO"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}