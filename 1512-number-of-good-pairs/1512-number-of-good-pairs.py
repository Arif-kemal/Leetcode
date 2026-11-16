class Solution:
    def numIdenticalPairs(self, nums: list[int]) -> int:
        n=len(nums)
        toplam=0
        for i in range(n):
            for j in range(i+1,n):
                if nums[i]==nums[j]:
                    toplam+=1
        return toplam            