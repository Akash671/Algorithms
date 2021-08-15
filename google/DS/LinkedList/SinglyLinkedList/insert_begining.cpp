
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

//---------------------------------------------------------------------

void insert_beginning()
{
	int d;
	cout<<"Enter your new node data : ";
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
		tmp->next=head;
		head=tmp;
	}
}
//time complexity T(n)=constant=O(1)=Q(1)
//---------------------------------------------------------------------


int main()
{
	while(1)
	{
		cout<<"1) create linked list\n2) display\n3) insert new node at beginning \n4) exit\n";
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
			insert_beginning();
			cout<<"\n";
		}
		else
		{
			break;
		}
	}
	return 0;
}
