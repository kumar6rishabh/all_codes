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
string addBinary(string a, string b);

int main()
{
    ll T;
    cin>>T;
    string s1 , s2 , rem="" , st;
    string arr[int(pow(10 , 5))];
    forn(i , int(pow(10 , 5))){
        arr[i] = rem;
        rem += '0';
    }
    while(T--){

    vector<string> s , m;
        cin>>s1>>s2;
        forn(i , s1.length()){
            string temp = s1+arr[i];
            s.pb(addBinary(temp , s2));
            m.pb(addBinary(temp , s2));
    } 
    sort(all(s));
    forn(i , s.size()) if(s[0] == m[i]) cout<<i;
    }
}

string addBinary(string a, string b) 
{ 
    string result = ""; // Initialize result 
    /*int s = 0;          // Initialize digit sum 
  
    // Traverse both strings starting from last 
    // characters 
    int i = a.size() - 1, j = b.size() - 1; 
    while (i >= 0 || j >= 0 || s == 1) 
    { 
        // Comput sum of last digits and carry 
        s += ((i >= 0)? a[i] - '0': 0); 
        s += ((j >= 0)? b[j] - '0': 0); 
  
        // If current digit sum is 1 or 3, add 1 to result 
        result = char(s % 2 + '0') + result; 
  
        // Compute carry 
        s /= 2; 
  
        // Move to next digits 
        i--; j--; 
    } */
    return result; 
} 