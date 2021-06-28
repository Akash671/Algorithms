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
node *root=NULL;
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
node* InsertNode(node *root)
{
    int key;
    cout<<"Enter your data node : ";
    cin>>key;
    return Insert(root,key);
}
//--------------------------------------------

bool SearchNode(node *root,int key)
{
	if(root==NULL)
	{
		return false;
	}
	if(root->data==key)
	{
		return true;//best case
	}

	bool res1=SearchNode(root->left,key);//for left
	if(res1)
	{
		return true;
	}
	bool res2=SearchNode(root->right,key); //for right
	return res2;
}
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
    cout<<"Enter your node size : ";
    int n;
    cin>>n;
    cout<<"Enter your node : ";
    for(int i=0;i<n;++i)
    {
        int key;
        cin>>key;
    	root=Insert(root,key);
    }

    while(1)
    {
    int ch;
    cout<<"\n1.InsertNode\n2.DeleteNode\n3.SearchNode\n4.Preorder";
    cout<<"\nchoice your operation : ";
    cin>>ch;
    // cout<<"1.InsertNode\n2.DeleteNode\n3.SearchNode"
    if(ch==1)
    {
    	root=InsertNode(root);
    	cout<<"\n";
    }
    else if(ch==2)
    {
    	//DeleteNode(root);
    	cout<<"\n";
    }
    else if(ch==3)
    {  
        int key;
       	cout<<"Enter search key : ";
       	cin>>key;
    	if(SearchNode(root,key))
    	{
    		cout<<"found";
    	}
    	else
    	{
    		cout<<"not found";
    	}
    	cout<<"\n";
    }
    else if(ch==4)
    {
       Preorder(root);
       cout<<"\n";
    }
    else
    {
    	break;
    }
   // Inorder(root);
   // cout<<"\n";
   // Postorder(root);
    }
	return 0;
}
