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


void selection_sort(int n,int a[])
{
	int min_index;
	for(int i=0;i<n-1;++i)
	{
	    min_index=i;
	    for(int j=i+1;j<n;++j)
	    {
	    	if(a[j]<a[min_index])
	    	{
	    		min_index=j;
	    	}
	    }
	    swap(a[i],a[min_index]);
	}
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<" ";
	}
}

void solve()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;++i)
  {
  	cin>>a[i];
  }
  selection_sort(n,a);
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
/*
Time Complexity: O(n2) as there are two nested loops.
Auxiliary Space: O(1) 
*/
