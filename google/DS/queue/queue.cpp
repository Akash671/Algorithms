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


int n=10;
int Q[10];


void insert()
{
	
}

void solve()
{
   while(1)
   {
   	cout<<"1.insert\n2.delete\n3.display\n4.exit\n";
   	cout<<"Enter opr : ";
   	int ch;
   	cin>>ch;
   	if(ch==1)
   	{
   		insert();
   		cout<<"\n";
   	}
   	else if(ch==2)
   	{
   		//del();
   		cout<<"\n";
   	}
   	else if(ch==3)
   	{
   		//display();
   		cout<<"\n";
   	}
   	else
   	{
   		return;
   	}
   }
}

int main()
{
    solve();
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
