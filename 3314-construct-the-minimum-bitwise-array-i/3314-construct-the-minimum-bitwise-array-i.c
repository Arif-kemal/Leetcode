/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minBitwiseArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* ans=(int*)malloc(numsSize*  sizeof(int));
    if(ans==NULL)return NULL;

    int k=0;
    for(int i=0;i<numsSize;i++){
        if(ans[i]==2)ans[i]=-1;
        else{
            ans[i]=-1;
            for(int x=0;x<nums[i];x++){
                if((x|(x+1))==nums[i]){
                    ans[i]=x;
                    break;
                }
            }
        }
    }
    return ans;
}