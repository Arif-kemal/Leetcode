class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        revers_arr=[-1];
        max_val=0;

        for num in arr[::-1]:
            if max_val<num:
                max_val=num
            revers_arr.append(max_val)    
        revers_arr.pop();
        return revers_arr[::-1] 