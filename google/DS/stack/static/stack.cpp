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
int top=-1;
int st[10];

void push()
{
	int data;
	cout<<"Enter your data : ";
	cin>>data;
	if(top==n)
	{
		cout<<"stack is full and can't not insert data";
	}
	else
	{
		top++;
		st[top]=data;
	}
}

void pop()
{
  if(top==-1)	
  {
  	cout<<"stack is empty and can't pop data";
  	return;
  }
  else
  {
  	cout<<"pop data : "<<st[top];
  	top--;
  }
}

void display()
{
	if(top==-1)
	{
		cout<<"stack is empty";
		return;
	}
	else
	{
	    cout<<"stack is : ";
		for(int i=0;i<=top;++i)
		{
			cout<<st[i]<<" ";
		}
	}
}

void solve()
{
  while(1) 
  {
  	//cout<<"Enter opr : ";
  	cout<<"1.push\n2.pop\n3.display\n4.exit\n";
  	cout<<"Enter opr : ";
  	int ch;
  	cin>>ch;
  	if(ch==1)
  	{
  		push();
  		cout<<"\n";
  	}
  	else if(ch==2)
  	{
  		pop();
  		cout<<"\n";
  	}
  	else if(ch==3)
  	{
  		display();
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
