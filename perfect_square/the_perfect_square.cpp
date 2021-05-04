/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

int solve(long long n)
{
	if(n>=0)
	{
		long long sq=sqrt(n);
		if(sq*sq==n)
		{
			return 1;
		}
	}
	return 0;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<solve(n)<<"\n";
	}
	return 0;
}

