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


class Solution
{
  public:
     void solve()
     {
        int n;
        int k;
        cin>>n>>k;
        int ans;
        if(n%2==0)
        {
           ans=n/2;
        }
        else
        {
        	ans=n/2+1;
        }
        cout<<ans*k;
     }	
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	        Solution ob;
            ob.solve();
            cout<<"\n";	    
	}
	return 0;
}

// time complexity : T(n)=O(1)
// space compexity : S(n)=O(1)
