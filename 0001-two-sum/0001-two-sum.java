

class Solution {
    public int[] twoSum(int[] nums, int target) {
        // Sayıları ve indislerini tutacak bir "not defteri" (HashMap)
        Map<Integer, Integer> map = new HashMap<>();
        
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i]; // Hedefe ulaşmak için gereken eksik sayı
            
            // "Eksik sayı daha önce notlarım arasına girmiş mi?"
            if (map.containsKey(complement)) {
                // Evet girmiş! O zaman o sayının sırasını ve şu anki sırayı döndür.
                return new int[] { map.get(complement), i };
            }
            
            // Eğer yoksa, şu anki sayıyı ve sırasını deftere kaydet.
            map.put(nums[i], i);
        }
        
        return new int[] {}; // Buraya hiç gelmeyecek
    }
}