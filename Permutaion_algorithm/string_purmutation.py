#author : @akashsaini

import itertools
 
if __name__ == '__main__':
 
    nums =str(input())
    S=nums
    permutations = list(itertools.permutations(nums))
 
    # Output: ['ABC', 'ACB', 'BAC', 'BCA', 'CAB', 'CBA']
    a=[''.join(permutation) for permutation in permutations]
    a.sort()
    #j=0
    for i in a:
       print(i)
