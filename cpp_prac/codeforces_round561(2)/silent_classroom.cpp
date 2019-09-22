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

using namespace std;

long long int x = 0;

void count_freq(vector< string > &v , vector< pair< char , int> > &f)
{
    for(int i = int('a') ; i <= int('z') ; i++)
    {
        int count = 0;
        for(auto j : v)
        {
            if(int(j[0]) == i)
                count++;
        }
        f.pb(mp(char(i),count));
    }
}
void refine(vector< pair< char , int> > &f , vector< long long int > &f1)
{
    for(auto i : f)
    {
        if(i.se == 1 || i.se == 0 && i.se == 2)
             continue;
        else
            f1.pb(i.se);
    }
}
/*long long int fact(int x)
{
    long long int  n = 1;
    if(x <= 1)
        return 1;
    else
    {
        for(int i = 1 ; i <= x ; i++)
        {
            n *= i;
        }
    }
    cout<<" n is "<<n<<endl;
    return n;
}*/
long long int comb(int n)
{
    return n*(n-1)/2;
}
long long int odd_combs(int i)
{
    int o = int(i / 2) + 1,e = int(i / 2);
    long long int sum = comb(o) + comb(e);
    return sum;
}
long long int even_combs(int i)
{
    int j = int(i/2);
    return 2*(comb(j));
}
void find(vector< long long int > &f1)
{
    for(auto i : f1)
        if(i%2 == 1)
            x += (odd_combs(i));
        else
            x += (even_combs(i));       
}

int main()
{
    int n;
    get1(n);
    vector< string > v;
    vector< pair< char , int> > f;
    vector< long long int > f1 , odd , even;
    forn(i , n) {
        string s;
        cin>>s;
        v.pb(s);
    }
    count_freq(v,f);
    refine(f,f1);
    find(f1);
    cout<<x;
}