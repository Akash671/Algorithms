
/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *next;
	node *prev;
};

node *head=NULL;

void Display()
{
	node *tmp=head;
	if(head==NULL)
	{
		cout<<"DList is empty\n";
	}
	else
	{
		while(tmp!=NULL)
		{
			cout<<tmp->data<<" ";
			tmp=tmp->next;
		}
	}
}

void createDList()
{
   int n;
   cout<<"Enter size of DList : ";
   cin>>n;
   cout<<"Enter data in DList : ";
   for(int i=0;i<n;++i)
   {
     node *new_node=new node();
     int item;
     cin>>item;
     new_node->data=item;
     if(head==NULL)
       {
      	new_node->next=NULL;
      	new_node->prev=NULL;
   	    head=new_node;
       }
     else
      {
     	node *tmp=head;
    	while(tmp->next!=NULL)
    	{
   	    	tmp=tmp->next;
     	}
    	tmp->next=new_node;
    	new_node->prev=tmp;
    	new_node->next=NULL;
      }
     }
}

int main()
{
	while(1)
	{
		cout<<"1) create doubly linked list\n2) Display\n3) exit()\n";
		cout<<"Enter your OPR : ";
		int ch;
		cin>>ch;
		if(ch==1)
		{
			createDList();
			cout<<"\n";
		}
		else if(ch==2)
		{
			Display();
			cout<<"\n";
		}
		else
		{
			break;
		}
	}
}
