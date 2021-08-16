
/* author : @akash */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


int numberOfPath(int m,int n)
{
	if(m==1 || n==1)
	{
		return 1;
	}
	return numberOfPath(m-1,n)+numberOfPath(m,n-1);
}

void solve()
{
  int m;
  int n;
  cin>>m>>n;
  cout<<numberOfPath(m,n);
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

// time complexity of this algorithm is : T(n)=O(m+n-1)																																																																																																																											
// time space of this algorithm is : T(n)=O(1)
