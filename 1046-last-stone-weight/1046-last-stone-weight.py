class Solution:
    def lastStoneWeight(self, stones: list[int]) -> int:
        n=len(stones)
        yeni=0
        if n<2:
            return stones[0]
        while len(stones)>1:
            stones.sort(reverse=True)
            yeni=abs(stones[0]-stones[1])
            stones.pop(0)
            stones.pop(0)
            if yeni!=0:
                stones.append(yeni)
                   
        return stones[0] if stones else 0   