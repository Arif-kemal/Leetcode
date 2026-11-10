class Solution:
    def largestRectangleArea(self, heights: list[int]) -> int:
        n=len(heights)
        stack=[]
        maxalan=0
        for i in range(n+1):
            h = heights[i] if i < n else 0
            while stack and heights[stack[-1]]>h:
                yukseklik=heights[stack.pop()]
                if stack:
                    genislik=i-stack[-1]-1
                else:
                    genislik=i
                alan=genislik*yukseklik
                maxalan=max(alan,maxalan)        
            stack.append(i)    
        return maxalan    