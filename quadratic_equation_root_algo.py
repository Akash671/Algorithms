"""author :@akash """

import math

def eq(a,b,c):
   dis=b*b-4*a*c 
   sqt=int(math.sqrt(abs(dis)))
   if dis>0 and a>0:
      print("Real and Distinct")
      print((-b-sqt)//(2*a),end=" ")
      print((-b+sqt)//(2*a))
   elif dis==0 and a>0:
      print("Real and Equal")
      print(-b//(2*a))
   else:
      print("Imaginary")

a,b,c=map(int,input().split())
eq(a,b,c)
