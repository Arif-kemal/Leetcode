class Solution:
    def timeRequiredToBuy(self, tickets: list[int], k: int) -> int:
        toplam=0
        n=len(tickets)
        for i in range(n):
            if i<k:
                toplam+=min(tickets[i],tickets[k])
            else:
                toplam+=min(tickets[i],tickets[k]-1)    
        return toplam+1        