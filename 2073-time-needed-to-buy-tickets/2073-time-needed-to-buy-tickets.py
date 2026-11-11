class Solution:
    def timeRequiredToBuy(self, tickets: list[int], k: int) -> int:
        n = len(tickets)
        toplam = 1
        i = 0

        while True:
            if i == k and tickets[i] - 1 == 0:
                break

            if tickets[i] == 0:
                toplam -= 1
            else:
                tickets[i] -= 1

            i += 1
            toplam += 1

            if i == n:
                i = 0

        return toplam