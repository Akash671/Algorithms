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
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;++i)
  {
  	cin>>a[i];
  }

  //algorithm.........
  for(int i=1;i<n;++i)
  {
  	int key=a[i];
  	int j=i-1;
  	while(j>=0 && a[j]>key)
  	{
  		a[j+1]=a[j];
  		j--;
  	}
  	a[j+1]=key;
  	cout<<"pass "<<i<<" array is : ";
  	for(int k=0;k<n;++k)
  	{
  		cout<<a[k]<<" ";
  	}
  	cout<<"\n";
  }
  cout<<"sorted array is : ";
  for(int i=0;i<n;++i)
  {
  	cout<<a[i]<<" ";
  }
  cout<<"\n";
  cout<<"Time complexity : T(n)=O(n^2)\n";
  cout<<"Space complexity: S(n)=O(1)";
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
