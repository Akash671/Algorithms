/* author : @akashsaini */

#include<iostream>
using namespace std;

int LinearSearch(int n,int a[],int s)
{
	for(int i=0;i<n;++i)
	{
		if(a[i]==s)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		int s;
		cin>>s;
		int res=LinearSearch(n,a,s);
		if(res==-1)
		{
			cout<<"Not found"<<endl;
		}
		else
		{
			cout<<"Found at index "<<res<<endl;
		}
	}
	return 0;
}