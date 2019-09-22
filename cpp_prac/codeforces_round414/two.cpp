#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int h,n;
    cin>>n>>h;
    if((n>=2 && n<=1000)&&(h>=1 && h<=100000))
    {
        double base = 1.00;
        double area = (base*h)/2;
        double i_area = area/(n);
        double arr[n+1];
        arr[0] = 0.00;
        arr[n] = 1.00;
        double tan = 1.0/(2.0*h);
        //first
        arr[1] = 2*sqrt(i_area*tan);
        for(int i = 1 ; i<n ; i++)
        {
            arr[i+1] = arr[i] + (2*((arr[i]*(-1))+sqrt(pow(arr[i],2)+4*i_area*tan))/2);
        }
        double heights[n];

        for(int i = 0 ; i<n; i++)
            heights[i] = ((arr[i+1] - arr[i])/2)/tan;
        double prev = 0.00; 
        for(int i = 0 ; i<n-1 ; i++)
        {
            prev += heights[i];
            cout<<setprecision(10)<<prev<<" ";
        }
    }
    else
        exit(0);
    return 0;
}