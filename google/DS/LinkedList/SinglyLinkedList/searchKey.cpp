#include<iostream>
using namespace std;

class node
{
	public:
	  int data;
	  node *next;
};

node *head=NULL;


void solve()
{
	node *tmp=NULL;
	head=tmp;
	cout<<"Enter size of linked list : ";
	int n;
	cin>>n;
	cout<<"Enter your data : ";
	
	for(int i=0;i<n;++i)
	{   int d;
		tmp=new node();
		cin>>d;
		tmp->data=d;
		tmp->next=NULL;
	}

	node *pp=head;
	cout<<"list is : ";
	while(pp!=NULL)
	{
		cout<<pp->data<<" ";
		pp=pp->next;
	}
	
	int key;
	cout<<"Enter your search key : ";
	node *p=head;
	cin>>key;
	while(p->next!=NULL)
	{
		if(p->data==key)
		{
			cout<<"key found";
			break;
		}
		else
		{
			p=p->next;
		}
	}
}

int main()
{
	solve();
	return 0;
}
