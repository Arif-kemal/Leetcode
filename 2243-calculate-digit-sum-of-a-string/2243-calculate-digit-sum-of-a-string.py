class Solution:
    def digitSum(self, s: str, k: int) -> str:
        while len(s)>k:
            yeni = ""
            for i in range(0,len(s),k):
                grup=s[i:i+k]
                toplam=0
                toplam=sum(int(x) for x in grup)

                yeni+=str(toplam)
            s=yeni

        return s