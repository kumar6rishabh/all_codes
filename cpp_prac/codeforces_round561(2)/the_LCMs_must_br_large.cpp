#include<bits/stdc++.h>

#define forn(i,n) for(long long int i = 0 ; i < (long long int)n ; i++)
#define for1(i,n) for(long long int i = 1 ; i < (long long int)n ; i++)
#define get1(a) scanf("%d", &a)
#define get2(a , b) scanf("%d%d", &a , &b)
#define get3(a , b , c) scanf("%d%d%d", &a , &b , &c)
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
ll comb(int m)
{
    return m*(m-1)/2;
}

int main()
{
    //cout<<"hi";
    ll m,n,t=0;
    cin>>m>>n;
    ll temp = m;
    int arr[50][10000];
    while(temp--){
        ll s,k;
        cin>>s;
        while(s--){
            cin>>k;
            arr[t][k-1] = 1;
        }
        t++;
    }
    /*forn(i,m){
        forn(j,n){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    ll flag = 0,flag1 = 0;
    forn(i,m-1){
        flag1 = 0;
        for(int j = i + 1 ; j < m ; j++){
            forn(k,n){
                if(arr[i][k]==arr[j][k] && arr[i][k]==1){
                    flag1 = 1;
                    flag++;
                    break;
                }
            }
        }
    }
    if(flag == comb(m))
        cout<<"possible";
    else
        cout<<"impossible";
    
}