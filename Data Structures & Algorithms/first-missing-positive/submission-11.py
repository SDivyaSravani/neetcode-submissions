class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)
        hashmap = {}
        for i in nums:
            hashmap[i] = 1
        positive = 1
        while True:
            if(positive in hashmap):
                positive +=1
            else:
                return positive