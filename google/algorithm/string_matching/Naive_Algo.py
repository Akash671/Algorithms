"""
author : @akash kumar
github : https://github/Akash671

string fun:

string.replace(sub_old_string,new_sub_string,count)
string.count(your_string)

search index in string:
Index=S.index(P)
"""

def solve():
   #n,m=map(int,input().split())
   #n=int(input())
   #a=list(map(int,input().split()[:n]))
   #s=str(input())
   #a,b=input().split()
   S=str(input()) # string
   P=str(input()) #pattern string 
   n=len(S)
   m=len(P)
   for i in range(n-m+1):
      j=0
      while(j<m):
        if(S[i+j]!=P[j]):
           break
        j+=1
      if(j==m):
         print("match at : ",str(i)+"-"+str(i+j-1))
for _ in range(int(input())):
  solve()
   
   
   
