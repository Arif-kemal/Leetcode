class Solution {
public:
    void merge(vector<int>& nums,vector<int>& temp,int sol,int orta,int sag){
        int i=sol;
        int j=orta+1;
        int k=sol;
        while(i<=orta&&j<=sag){
            if(nums[i]<=nums[j]){
                temp[k]=nums[i];
                i++;
            }else{
                temp[k]=nums[j];
                j++;
            }
            k++;
        }

        while(i<=orta){
            temp[k]=nums[i];
            i++;
            k++;
        }
        while(j<=sag){
            temp[k]=nums[j];
            j++;
            k++;
        }
        for(int x=sol;x<=sag;x++){
            nums[x]=temp[x];
        }  
    }
    void mergesort(vector<int>& nums,vector<int>& temp,int sol,int sag){
        if(sol>=sag){
            return;
        }
        int orta=sol+(sag-sol)/2;
        mergesort(nums,temp,sol,orta);
        mergesort(nums,temp,orta+1,sag);
        merge(nums,temp,sol,orta,sag);
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int>temp(nums.size());
        mergesort(nums,temp,0,nums.size()-1);
        return nums;
    }
};