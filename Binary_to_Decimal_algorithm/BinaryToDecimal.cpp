/* author : @akash kumar */

#include<iostream>
using namespace std;

int solve(int n)
{
    int base=1;
    int d=0;
    int r;
    while(n)
    {
        r=n%10;
        d+=r*base;
        n=n/10;
        base=base*2;
    }
    return d;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<"\n";
    }
    return 0;
}
