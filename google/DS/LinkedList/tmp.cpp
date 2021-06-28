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

void delRandom()
{
	if(head==NULL)
	{
		cout<<"empty";
	}
	else
	{
		int pos;
		cout<<"Enter delete location : ";
		cin>>pos;
		node *p=head;
		node *tmp=head;
		for(int i=0;i<pos;++i)
		{
			tmp=p;
			p=p->next;
		}
		tmp->next=p->next;
		delete p;
	}
}

void delEnd()
{
	if(head==NULL)
	{
		cout<<"list empty";
	}
	else if(head->next==NULL)
	{
		head=NULL;
	}
	else
	{
		node *p=head;
		node *prev=NULL;
		//p find secounf last node in list
		while(p->next!=NULL)
		{
		    prev=p;
			p=p->next;
		}
		delete p;
		prev->next=NULL;
	}
}

void deleteBeg()
{
	if(head==NULL)
	{
		cout<<"list is empty ";
	}
	else
	{
		node *p=NULL;
		p=head->next;
		head=p;
	}
}

void insertRandom()
{
	node *tmp=NULL;
	node *p=NULL;
	tmp=new node();
	cout<<"Enter you node : ";
	int d;
	cin>>d;
	tmp->data=d;
	tmp->next=NULL;
	cout<<"Enter location : ";
	int loc;
	cin>>loc;
	if(loc==0)
	{
		tmp->next=head;
		head=tmp;
	}
	else
	{
	    p=head;
		for(int i=0;i<loc;++i)
		{
			p=p->next;
		}
		tmp->next=p->next;
		p->next=tmp;
	}
}

void insertEnd()
{
	node *tmp=NULL;
	//node p=head;
	tmp=new node();
	int d;
	cout<<"Enter you node data : ";
	cin>>d;
	tmp->data=d;
	tmp->next=NULL;
	if(head==NULL)
	{
		head=tmp;
	}
	else
	{
		node *p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=tmp;
	}
}

void insertBeg()
{
	node *tmp=NULL;
	tmp=new node();
	int d;
	cout<<"Enter node data : ";
	cin>>d;
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

void solve()
{
	
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
	//display(head);
}

int main()
{
	while(1)
	{
	    cout<<"1.make linked listn\n2.insert at begining\n3.insert at end\n4.insertRandom\n5.delete beg\n6.delete at end\n7delete at random\n8.display"<<"\n";
	    cout<<"Enter your choice : ";
	    int ch;
	    cin>>ch;
	    if(ch==1)
	    {
	    	solve();
	    	cout<<"\n";
	    }
		//solve();
		if(ch==2)
		{
			insertBeg();
			cout<<"\n";
		}
		if(ch==3)
		{
			insertEnd();
			cout<<"\n";
		}
		if(ch==4)
		{
			insertRandom();
			cout<<"\n";
		}
		if(ch==5)
		{
			deleteBeg();
			cout<<"\n";
		}
		if(ch==6)
		{
			delEnd();
			cout<<"\n";
		}
		if(ch==7)
		{
			delRandom();
			cout<<"\n";
		}
		if(ch==8)
		{
			display();
			cout<<"\n";
		}
	}
	return 0;
}
