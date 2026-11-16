class Solution:
    def kidsWithCandies(self, candies: list[int], extraCandies: int) -> list[bool]:
        n=len(candies)
        en=0
        sonuc=[False]*n
        for i in candies:
            en=max(en,i)
        for i in range(n):
            if en<=candies[i]+extraCandies:
                sonuc[i]=True
        return sonuc            
