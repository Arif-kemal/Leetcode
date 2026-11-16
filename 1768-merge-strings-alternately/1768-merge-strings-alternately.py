class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        n1=len(word1) 
        n2=len(word2)
        harf=[]
        if n1==n2:
            for i in range(n1):
                harf.append(word1[i])
                harf.append(word2[i])
        elif n1>n2:
            for i in range(n2):
                harf.append(word1[i])
                harf.append(word2[i])
            for i in range(n2,n1):
                harf.append(word1[i]) 
        else:
            for i in range(n1):
                harf.append(word1[i])
                harf.append(word2[i])
            for i in range(n1,n2):
                harf.append(word2[i]) 
        return "".join(harf)                 

