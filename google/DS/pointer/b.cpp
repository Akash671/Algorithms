#include<iostream>
using namespace std;

void exchange(int *a,int *b)
{
	int *ptr;
	ptr=a;
	a=b;
	b=ptr;
	
}

void solve()
{
	int a;
	int b;
	cin>>a>>b;
	exchange(&a,&b);
	cout<<a<<" "<<b<<"\n";
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
