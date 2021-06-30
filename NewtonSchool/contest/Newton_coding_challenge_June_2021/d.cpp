/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   ll L,X;
   cin>>L>>X;
   int c=0;
   /*
   for(ll i=1;i<=L;++i)
   {
   	for(ll j=i;j<=L;++j)
   	{
   	   if(__gcd(i,j)==X)
   	   {
   	   	c++;
   	   }
   	}
   }
   */
   for(ll i=1;i<=L;++i)
   {
   	if(i%X==0)
   	{
   		c++;
   	}
   }
   cout<<c;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    cout<<"\n";	    
	return 0;
}
