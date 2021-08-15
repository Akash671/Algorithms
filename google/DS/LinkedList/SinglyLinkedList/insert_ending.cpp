/*
author : @akash kumar
*/

#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *next;
};

node *head=NULL;

void createList()
{
	int n;
	int d;
	cout<<"Enter size of LinkedList : ";
	cin>>n;
	cout<<"Enter data in LinkedList : ";
	node *tmp=NULL;
	node *p=NULL;
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
			while(p->next)
			{
				p=p->next;
			}
			p->next=tmp;
			tmp->next=p->next->next;
		}
	}
}

void display()
{
	if(head==NULL)
	{
		cout<<"LinkedList is empty\n";
		return;
	}
	cout<<"Linked List is : ";
	node *p=head;
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	
}

//-----------------------------------------------------------------------

void insert_ending()
{
	int d;
	cout<<"Enter new node data : ";
	cin>>d;

	node *tmp=new node();
	tmp->data=d;
	tmp->next=NULL;

	if(head==NULL)
	{
		head=tmp;
	}
	else
	{
		node *p=head;
		while(p->next)
		{
			p=p->next;
			
		}
		p->next=tmp;
	}
}

// time complexity T(n)=Q(n) because every time you visit n node for reaching end
//------------------------------------------------------------------------------
int main()
{
	while(1)
	{
		cout<<"1) create linked list\n2) display\n3) insert new node at ending \n4) exit\n";
		cout<<"Enter OPR : ";
		int ch;
		cin>>ch;
		if(ch==1)
		{
			createList();
			cout<<"\n";
		}
		else if(ch==2)
		{
			display();
			cout<<"\n";
		}
		else if(ch==3)
		{
			insert_ending();
			cout<<"\n";
		}
		else
		{
			break;
		}
	}
	return 0;
}
