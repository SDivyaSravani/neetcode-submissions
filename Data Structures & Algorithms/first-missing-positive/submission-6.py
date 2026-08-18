class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)
        hashmap = {}
        for i in nums:
            hashmap[i] = True
        positive = 1
        for i in range(1,n+1):
            if(positive in hashmap):
                positive +=1
            else:
                return positive
        return n+1