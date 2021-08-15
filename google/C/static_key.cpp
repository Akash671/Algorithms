#include<iostream>
using namespace std;

int func()
{
	static int count=0;//fixed variable i.e not declear agin and again
	count++;
	return count;
}

int main()
{
	for(int i=0;i<5;++i)
	{
		cout<<func()<<"\n";
	}
	return 0;
}
