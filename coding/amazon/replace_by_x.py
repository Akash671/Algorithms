for _ in range(int(input())):
   String=str(input())
   pattern=str(input())
   
   patter_size=len(pattern)
   while(1):
     try:
        found_index=String.index(pattern)
        #print(found_index)
        if String[found_index-1]!='X':
           String=String[:found_index]+'X'+String[found_index+patter_size:]
        else:
            String=String[:found_index]+String[found_index+patter_size:]
     except:
          break
   print(String)
