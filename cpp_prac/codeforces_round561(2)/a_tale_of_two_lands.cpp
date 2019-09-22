#include<bits/stdc++.h>

#define forn(i,n) for(int i = 0 ; i < (int)n ; i++)
#define for1(i,n) for(int i = 1 ; i < (int)n ; i++)
#define get1(a) scanf("%d", &a)
#define get2(a , b) scanf("%d%d", &a , &b)
#define get3(a , b , c) scanf("%d%d%d", &a , &b , &c)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define dispa(arr) for(auto i : arr) cout<<i<<" ";
#define dispv(v) for(auto i : v) cout<<i<<" ";
#define Max(arr) *max_element(arr,arr + sizeof(arr)/sizeof(arr[0]));  // only for main function
#define Min(arr) *min_element(arr,arr + sizeof(arr)/sizeof(arr[0]));  // only for main function
#define MAX(a , b) (a > b)? a:b
#define MIN(a , b) (a < b)? a:b

using namespace std;

int main()
{
    long long int n,k,pairs = 0;
    cin>>n;
    long long int arr[n];
    forn(i,n){
        scanf("%lld",&k);
        arr[i] = abs(k);   
    }
    sort(arr,arr+n);
    forn(i,n){
        long long int p = upper_bound(arr,arr + n,2*arr[i]) - arr;
        pairs += p-i-1;
    }
    cout<<pairs;
}