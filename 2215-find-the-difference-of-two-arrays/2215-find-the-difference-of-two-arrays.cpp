class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1;
        unordered_set<int>set2;
        for (int sayi : nums1) {
            set1.insert(sayi);
        }
        for (int sayi : nums2) {
            set2.insert(sayi);
        }
        vector<vector<int>>arif(2);
        for(int sayi:set1){
            if(!set2.count(sayi)){
                arif[0].push_back(sayi);
            }
        }
        for(int sayi:set2){
            if(!set1.count(sayi)){
                arif[1].push_back(sayi);
            }
        }
        return arif;
    }
};