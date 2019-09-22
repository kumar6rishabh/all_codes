#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int n;
    cin>>n;
    int count = 0,x;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>x;
        if(x>b && x<c)
        count++;
    }
    cout<<count;
    return 0;
}