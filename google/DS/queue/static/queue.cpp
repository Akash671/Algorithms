/* author : @akash */


/* 
problem is:-

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void showq(queue<int>Q)
{
	queue<int>q=Q;
	while(!q.empty())
	{
		cout<<" "<<q.front();
		q.pop();
	}
	cout<<"\n";
}


void solve()
{
   cout<<"Enter your number of data : ";
   int n;
   cin>>n;
   queue<int>Q;
   cout<<"Enter data of your queue : ";
   int data;
   for(int i=0;i<n;++i)
   {
   	cin>>data;
   	Q.push(data);
   }

   cout<<"\nyour queue is : ";
   showq(Q);

   cout<<"\npop element from front";
   Q.pop();
   showq(Q);
  // cout << "\ngquiz.size() : " << Q.size();
  // cout << "\ngquiz.front() : " << Q.front();
  // cout << "\ngquiz.back() : " << Q.back();
}

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
            solve();
            cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
