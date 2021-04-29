#author : @akash kumar

from collections import OrderedDict
def remove_duplicate(str1):
  return "".join(OrderedDict.fromkeys(str1))

s=str(input())
print(remove_duplicate(s))
