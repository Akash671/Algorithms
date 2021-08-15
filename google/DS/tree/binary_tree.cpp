// author : Akash Kumar 

#include<iostream>
using namespace std;

/*
The Maximum number of nodes in a binary tree of height ‘h’ is 2^h – 1. 
The maximum number of nodes at level ‘l’ of a binary tree is 2^l. 
In a Binary Tree with N nodes, minimum possible height or the minimum number of levels is? Log2(N+1) ?   \

Sum of all degrees  = 2 * (Sum of Edges)

What is Handshaking Lemma? Handshaking lemma is about undirected graph. In every finite undirected graph, an even number of vertices will always have 

*/

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

bool Search(node *root,int key)
{ 
   if(root==NULL)
   {
   	return false;
   }
   if(root->data==key)
   {
   	return true;
   }

   bool forLeft=Search(root->left,key);
   if(forLeft)
   {
   	return true;
   }
   bool forRight=Search(root->right,key);
   return forRight;
}
//time complexity this searching function T(n)=O(log(n))


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
    //Preorder(root);
    //cout<<"\n";
    Inorder(root);
    cout<<"\n";
    //Postorder(root);
    cout<<"Enter the search key : ";
    int key;
    cin>>key;
    if(Search(root,key))
    {
    	cout<<"key found";
    }
    else
    {
    	cout<<"key is not found";
    }
    cout<<"\n";
	return 0;
}
