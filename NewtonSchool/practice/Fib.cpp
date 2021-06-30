/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   int n;
   cin>>n;
   if(n==1)
   {
   	cout<<"Dead";
   }
   else if(n==2)
   {
   	cout<<"Alive";
   }
   else
   {
   	int a=0;
   	int b=1;
   	int c;
   	for(int i=2;i<n;++i)
   	{
   		c=a+b;
   		a=b;
   		b=c;
   	}
   	if(c%2==0)
   	{
   		cout<<"Dead";
   	}
   	else
   	{
   		cout<<"Alive";
   	}
   } 
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
