#include<iostream>
using namespace std;

void solve()
{
	int a=10;
	int *p;
	p=&a;
	int **pp=&p;
	
	cout<<*p;
	cout<<"\n";
	cout<<**pp;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
