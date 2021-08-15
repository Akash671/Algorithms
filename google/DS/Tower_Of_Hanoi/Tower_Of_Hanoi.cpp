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

void Tower_Of_Hanoi(int n,char A,char C,char B)
{
	if(n==1)
	{
		cout<<"\nMove disk 1 from tower "<<A<<" to tower "<<C<<"\n";
		return;
	}
	else
	{
		Tower_Of_Hanoi(n-1,A,B,C);
		cout<<"Move disk "<<n<<" from tower "<<A<<" to tower "<<C<<"\n";
		Tower_Of_Hanoi(n-1,B,C,A);
	}
}

void solve()
{
   cout<<"Enter The Number Of Disk : " ;
   int n;
   cin>>n;
   Tower_Of_Hanoi(n,'A','C','B');
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
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
