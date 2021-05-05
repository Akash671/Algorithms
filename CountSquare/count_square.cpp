/* author : @akashsaini */

#include<iostream>
using namespace std;

int solve(int n)
{
	return (n*(n+1)/2)*(2*n+1)/3;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<solve(n)<<"\n";
	}
	return 0;
}
