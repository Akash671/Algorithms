#include<iostream>
using namespace std;

//--------------------------------------------
class node
{
    public:
	int data;
	node *left,*right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
//-----------------------------------------

node* Insert(node *root,int key)
{
	if(root==NULL)
	{
	    root=new node(key);
	    return root;
	}
	else if(key<root->data)
	{
		root->left=Insert(root->left,key);
	}
	else
	{
		root->right=Insert(root->right,key);
	}
	return root;
}
//-------------------------------------------
void Preorder(node *root)
{
	if(root==NULL)
	{
		return ;
	}
	cout<<root->data<<" ";
	Preorder(root->left);
	Preorder(root->right);
}
//----------------------------------------
void Inorder(node *root)
{
	if(root==NULL)
	{
		return ;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}
//-----------------------------------------
void Postorder(node *root)
{
	if(root==NULL)
	{
		return ;
	}
	Postorder(root->left);
	Postorder(root->right);
	cout<<root->data<<" ";
}
//------------------------------------------

int main()
{
    int n;
    cin>>n;
    node *root=NULL;
    for(int i=0;i<n;++i)
    {
        int key;
        cin>>key;
    	root=Insert(root,key);
    }
    Preorder(root);
    cout<<"\n";
    Inorder(root);
    cout<<"\n";
    Postorder(root);
	return 0;
}
