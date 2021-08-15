/* author : @akash */

#include<bits/stdc++.h>
using namespace std;


class node
{
	public:
	int data;
	node *next;
};

node *front=NULL;
node *rear=NULL;

void EnQueue()
{
	cout<<"Enter new node : ";
	int item;
	cin>>item;
	node *new_node=new node();
	new_node->data=item;
	new_node->next=NULL;
	if(front==NULL)
	{
		front=new_node;
		rear=front;
	}
	else
	{
		rear=front;
		while(rear->next!=NULL)
		{
			rear=rear->next;
		}
		rear->next=new_node;
		rear=new_node;
	}
}

void DeQueue()
{
   	
}

void Display()
{
	if(front==NULL)
	{
		cout<<"Queue is empty\n";
	}
	else
	{
	    node *tmp=front;
		while(tmp->next!=NULL)
		{
			cout<<tmp->data<<" ";
			tmp=tmp->next;
		}
	}
}

int main()
{
   while(1)	
   {
   	cout<<"1) EnQueue\n2) DeQueue\n3) Display\n4) Exit()\n";
   	cout<<"Enter Your Choice : ";
   	int ch;
   	cin>>ch;
   	if(ch==1)
   	{
   		EnQueue();
   		cout<<"\n";
   	}
   	else if(ch==2)
   	{
   		DeQueue();
   		cout<<"\n";
   	}
   	else if(ch==3)
   	{
   		Display();
   		cout<<"\n";
   	}
   	else
   	{
   	   break;
   	}
   }
   return 0;
}
