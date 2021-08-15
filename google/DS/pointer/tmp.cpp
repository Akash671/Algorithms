/* author : @akash */


/* 
problem is:-

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   int a=10;
   cout<<"a=10"<<"\n";
   int *b=&a;
   
   //*b=*b+a;
   cout<<*b<<"\n";
   *b++;//=address
   //*b=*b+1=value;
   cout<<*b<<"\n";
   //b++;
   //cout<<"b="<<b<<"\n*b="<<*b<<"\n&b="<<&b<<"\n";
   *b++;
   cout<<"b="<<b<<"\n*b="<<*b<<"\n&b="<<&b<<"\n";
   //&b++;
   //cout<<"b="<<b<<"*b="<<*b<<"&b="<<&b<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
            solve();
            cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
