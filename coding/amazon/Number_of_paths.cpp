/* author : @akash */


/* 
problem is:-
The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.

Example 1:

Input:
M = 3 and N = 3
Output: 6
Explanation:
Let the given input 3*3 matrix is filled 
as such:
A B C
D E F
G H I
The possible paths which exists to reach 
'I' from 'A' following above conditions 
are as follows:ABCFI, ABEHI, ADGHI, ADEFI, 
ADEHI, ABEFI
 

Example 2:

Input:
M = 2 and N = 8
Output: 8

Your Task:  
You don't need to read input or print anything. Your task is to complete the function numberOfPaths() which takes the integer M and integer N as input parameters and returns the number of paths..

Expected Time Complexity: O(m + n - 1))
Expected Auxiliary Space: O(1)

 

Constraints:
*/


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
