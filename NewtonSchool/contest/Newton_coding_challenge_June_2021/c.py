for i in range(int(input())):
 a,b=map(int,input().split())
 print(a,b,end="=")
 if(b==0):
   print("Chandler")
 else:
  flag=0
  i=1
  while(1):
   if i%2!=0 and b!=0 and b>=i:
         b-=i
         a+=i
         i+=1
         flag=2
   elif(i%2==0 and a!=0 and a>=i):
      a-=i
      b+=i
      i+=1
      flag=1
   else:
      break
  if flag==1:
    print("Chandler")
  else:
    print("Joey")
"""
a=1 b=2 i=2 f=2
b=0 a=3 i=3 f=1

"""
    
