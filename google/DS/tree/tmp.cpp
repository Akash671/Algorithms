#include<iostream>
using namespace std;

class node
{
	public:
	  int data;
	  node *left;
	  node *right;

	  node(int val)
	  {
	  	data=val;
	  	left=NULL;
	  	right=NULL;
	  }
};

void display(node *p)
{
	if(p==NULL)
	{
		return ;
	}
	else
	{
		cout<<p->data<<" ";
		display(p->left);
		display(p->right);
	}
}

int main()
{
   node *root=new node(1);
   root->left=new node(2);
   root->right=new node(3);

   root->left->left=new node(4);

   display(root);
   cout<<"\n";
   return 0;
}
