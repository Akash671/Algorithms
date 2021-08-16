/* author : @akash */


/* 
problem is:-
Given a number N. The task is to generate and print all binary numbers with decimal values from 1 to N.

Example 1:

Input:
N = 2
Output: 
1 10
Explanation: 
Binary numbers from
1 to 2 are 1 and 10.

Example 2:

Input:
N = 5
Output: 
1 10 11 100 101
Explanation: 
Binary numbers from
1 to 5 are 1 , 10 , 11 , 100 and 101.
 

Your Task:
You only need to complete the function generate() that takes N as parameter and returns vector of strings denoting binary numbers.

Expected Time Complexity : O(N log2N)
Expected Auxilliary Space : O(N log2N)

Constraints:
1 ≤ N ≤ 106
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double

int DecimaltoBinary(int n)
{
    long binary = 0, pow = 1;

    while (n > 0)
    {
        int lastBit = n % 2;
        binary += lastBit * pow;
        pow *= 10;
        n = n / 2;
    }
    return binary;
}

void solve()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;++i)
  {
  	cout<<DecimaltoBinary(i)<<" ";
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
