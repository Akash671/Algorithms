"""
author : @akash kumar
github : https://github/Akash671

string fun:

string.replace(sub_old_string,new_sub_string,count)
string.count(your_string)
"""

def solve():
   #n,m=map(int,input().split())
   #n=int(input())
   #a=list(map(int,input().split()[:n]))
   #s=str(input())
   #a,b=input().split()
   n=int(input())
   a=list(map(int,input().split()[:n]))
   b=list(map(int,input().split()[:n]))
   ans=1
   for i in a:
      for j in b:
         if i^j in (a or b):
            ans+=1
   if ans%2==0:
      print("Yes")
   else:
     print("No")

for _ in range(int(input())):
  solve()
