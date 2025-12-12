class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        
        // left'ten right'a kadar dönüyoruz
        for (int i = left; i <= right; i++) {
            int temp = i;  // 1. DÜZELTME: Asıl sayıyı (i) bozmuyoruz, kopyasını (tempalıyoruz.
            bool isSelf = true; // 3. DÜZELTME: Varsayılan olarak sayıyı uygun kabul ediyoruz.
            
            while (temp > 0) {
                int digit = temp % 10;
                
                // 2. DÜZELTME: Önce digit 0 mı diye bakıyoruz. VEYA sayı digite bölünmüyor mu?
                // Dikkat: Mod alırken 'temp' değil, orijinal sayı olan 'i' kullanılmalı.
                if (digit == 0 || i % digit != 0) {
                    isSelf = false; // Uygun değilmiş
                    break;          // Döngüyü kır
                }
                
                temp /= 10;
            }
            
            // Eğer döngü bittiğinde hala isSelf true ise listeye ekle
            if (isSelf) {
                arr.push_back(i);
            }
        }
        
        return arr; // return etmeyi unutmuşsun :)
    }
};