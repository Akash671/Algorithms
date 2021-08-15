/* author : @akash */


/* 
problem is:-
stack implementation using dynamic
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double

class node
{
	public:
	  int data;
	  node *next;
};

node *head=NULL;


void create()
{   
    cout<<"how many number you want to push : ";
    int n;
    cin>>n;
    cout<<"entr data : ";
    for(int i=0;i<n;++i)
    {
	int val;
	node *p=new node();
	if(p==NULL)
	{
		cout<<"full";
	}
	else
	{
		//cout<<"entr data : ";
		cin>>val;
		if(head==NULL)
		{
			p->data=val;
	    	p->next=NULL;
	    	head=p;
	    }
	    else
	    {
	    	p->data=val;
	    	p->next=head;
	    	head=p;
	    }
	// cout<<"pushed data";
     }
   }
}

void push()
{
   int d;
   node *p=new node();
   if(p==NULL)
   {
   	cout<<"-----don't push-----";
   }
   else
   {
   	cout<<"enter data : ";
   	cin>>d;
   	if(head==NULL)
   	{
   		p->data=d;
   		p->next=NULL;
   		head=p;
   	}
   	else
   	{
   		p->data=d;
   		p->next=head;
   		head=p;
   	}
   }
}

void pop()
{
	int d;
	node *p=new node();
	if(head==NULL)
	{
		cout<<"------underflow------";
	}
	else
	{
		d=head->data;
		p=head;
		head=head->next;
		free(p);
		cout<<"-----poped data : "<<d<<" --------";
	}
}

void display()
{
    if(head==NULL)
    {
    	cout<<"-----empty stack-----";
    }
    else
    {
    node *pt=head;
	while(pt!=NULL)
	{
		cout<<pt->data<<"\n";
		pt=pt->next;
	}
	}
}

void solve()
{
   while(1)   
   {
   	int ch;
   	cout<<"1.create\n2.push\n3.pop\n4.display\n5.exit\nEnter opr : ";
   	cin>>ch;
   	if(ch==1)
   	{
   		create();
   		cout<<"\n";
   	}
   	if(ch==2)
   	{
   		push();
   		cout<<"\n";
   	}
   	if(ch==3)
   	{
   	   pop();
   	   cout<<"\n";
   	}
   	if(ch==4)
   	{
   	   display();
   	   cout<<"\n";
   		
   	}
   	if(ch==5)
   	{
   		exit(0);
   	}
   }
}

int main()
{
    solve();
    cout<<"\n";
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
