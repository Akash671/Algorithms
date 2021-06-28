#include<iostream>
using namespace std;

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
		int *ptr;
		ptr=a;
		for(int i=0;i<n;++i)
		{
			cout<<ptr[i]<<" ";
		}
		cout<<"\n";
		for(int i=0;i<n;++i)
		{
			cout<<*ptr<<" ";
			ptr++;
		}
	}
}
