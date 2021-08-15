#include<iostream>
#include<iostream>
using namespace std;

class node
{
   public:
	int data;
	node *next;	
};

node *head=NULL;

void display()
{
    if(head==NULL)
    {
    	cout<<"list is empty\n";
    }
    cout<<"Linked List is : ";
	node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void createList()
{
	int n;
	int d;
	cout<<"Enter size of LinkedList: ";
	cin>>n;
	cout<<"Enter your data : ";
	node *tmp=NULL;//node decleare
	node *p=NULL;
	for(int i=0;i<n;++i)
	{
	    /*create node*/
		tmp=new node();
		cin>>d;
		tmp->data=d;
		tmp->next=NULL;
		//end
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
	//display(head);
}

int main()
{
	while(1)
	{
	    cout<<"1.make linked list\n2.display\n3.exit"<<"\n";
	    cout<<"Enter your choice : ";
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
		else
		{
			exit(0);
		}
	}
	return 0;
}


//Traverse time complexity T(n)=Q(n)
