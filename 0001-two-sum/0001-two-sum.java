class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] dizi= new int[2];
        int n=0;
        for(int i=0;i<nums.length-1;i++){
            n=nums[i];
            for(int j=i+1;j<nums.length;j++){
                if(target-n==nums[j]){  
                    dizi[0]=i;
                    dizi[1]=j;
                    return dizi;
                }
            }
        }
        return dizi;
    }
}