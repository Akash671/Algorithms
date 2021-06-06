def power(base,n):
   ans=1
   while(n):
      if(n%2):
         ans=(ans*base)%MOD
      base=(base*base)%MOD
      n>>=1 #each time divide the power by 2
   return ans
   
   return ans

print(power(2,3))
