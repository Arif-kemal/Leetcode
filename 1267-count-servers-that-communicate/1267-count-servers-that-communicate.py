class Solution:
    def countServers(self, grid: list[list[int]]) -> int:
        n=len(grid)
        k=len(grid[0])
        satir=[0]*n
        sutun=[0]*k
        toplam=0
        for i in range(n):
            for j in range(k):
                if grid[i][j]==1:
                  satir[i]+=1
                  sutun[j]+=1
        for i in range(n):
            for j in range(k):
                if grid[i][j] == 1:
                    if satir[i] > 1 or sutun[j] > 1:
                        toplam += 1
        return toplam                         