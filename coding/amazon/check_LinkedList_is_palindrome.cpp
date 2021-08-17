/*
author : @akash 
*/

// { Driver Code Starts
//#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

#include<bits/stdc++.h>

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
	if(head==NULL)
	{
		return 1;
	}

        Node *tmp=head;
	vector<int>a;
        while(tmp!=NULL)
	{
		a.push_back(tmp->data);
		tmp=tmp->next;
	}
	reverse(a.begin(),a.end());
	Node *p=head;
	int i=0;
	while(p!=NULL)
	{
		if(p->data!=a[i])
		{
			return 0;
		}
		i++;
		p=p->next;
	}
	return 1;
    }
    //time complexity T(n)=O(n)
    //space complexity S(n)=O(n)
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends
