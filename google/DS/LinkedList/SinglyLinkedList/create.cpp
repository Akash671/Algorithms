#include<iostream>
using namespace std;

class node
{
   public:
	int data;
	node *next;	
};

void display(node *head)
{
    cout<<"Linked List is : ";
	node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void solve()
{
	node *head=NULL;
	node *tmp=NULL;
	node *p=NULL;
	int n;
	int d;
	cout<<"Enter size of LinkedList: ";
	cin>>n;
	cout<<"Enter your data : ";
	for(int i=0;i<n;++i)
	{
		tmp=new node();
		cin>>d;
		tmp->data=d;
		tmp->next=NULL;

		if(head==NULL)
		{
			head=tmp;
		}
		else
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=tmp;
		}
	}
	display(head);
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
