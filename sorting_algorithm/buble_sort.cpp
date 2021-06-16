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

void bubble_sort(int n,int a[])
{
	for(int i=0;i<n-1;++i)
	{
		for(int j=0;j<n-1-i;++j)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
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
   bubble_sort(n,a);
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

/*
time complexity of this algorithm is :

best case  :  O(n^2)
Average case : O(n^2)
wrost case   : O(n^2)

space :
S(n) : O(n)
*/
