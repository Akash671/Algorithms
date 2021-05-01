/* author : @akashsaini */

#include<iostream>
using namespace std;

int BinarySearch(int n,int a[],int s)
{
  int low=0;
  int high=n-1;
  while(low<=high)
  {
    int mid=low+(high-low)/2;
    if(a[mid]==s)
    {
      return mid;
    }
    else if(a[mid]<s)
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return -1;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
      cin>>a[i];
    }
    int s;
    cin>>s;
    int res=BinarySearch(n,a,s);
    if(res==-1)
    {
      cout<<"Not found"<<endl;
    }
    else
    {
      cout<<"Found at index "<<res<<endl;
    }
  }
  return 0;
}

//running time T(n)=O(logn)
