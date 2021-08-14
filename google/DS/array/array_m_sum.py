n=int(input())
a=list(map(int,input().split()[:n]))
m=int(input())

ans=0

for i in range(m):
   ans+=a[i]
res=ans

for i in range(m):
   res-=a[m-1-i]
   res+=a[n-i-1]
   ans=max(ans,res)
print(ans)
   
