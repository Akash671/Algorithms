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


int partition(int a[],int low,int high)
{
	int piv=a[high];
	int i=low-1;
	for(int j=low;j<=high-1;++j)
	{
		if(a[j]<piv)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[high]);
	return i+1;
}

void quick_sort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi=partition(a,low,high);
		quick_sort(a,low,pi-1);
		quick_sort(a,pi+1,high);
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
  quick_sort(a,0,n-1);
  for(int i=0;i<n;++i)
  {
  	cout<<a[i]<<" ";
  }
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
wrost O(n^2)
Avg O(nLogn)
Best O(nLogn)
*/
