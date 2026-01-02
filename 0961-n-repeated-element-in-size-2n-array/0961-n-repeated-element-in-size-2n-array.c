int repeatedNTimes(int* nums, int numsSize) {
    while(1){
        int i=rand()%numsSize;
        int j=rand()%numsSize;

        if(i!=j && nums[i]==nums[j])return nums[i];
    }
    return -1;
}