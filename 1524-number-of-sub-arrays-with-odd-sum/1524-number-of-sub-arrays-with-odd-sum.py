class Solution:
    def numOfSubarrays(self, arr: list[int]) -> int:
        tek = 0
        cift = 1
        toplam = 0
        cevap = 0

        for x in arr:
            toplam += x

            if toplam % 2 == 0:
                cevap += tek
                cift += 1
            else:
                cevap += cift
                tek += 1
        return cevap % (10**9 + 7)