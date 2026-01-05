class Solution {
public:
    int bulbSwitch(int n) {
       /*BU soru düşününce basit bir sayi teorisi sorusu 
       ->soruda adım adım birin katları degistiriliyor
       2'nin katlari degistiriliyor, 3'un katlari degistiriliyor
       sonuc olarakda kac ampul acık kaliyor bunu dondurmamiz isteniyor*/ 
       int num=0;
       for(int i=1;i<=n;i++){
        if(i*i<=n){num++;}// eger tam kare sayi varsa o aciktir
        else{break;}
       }
       return num;
    }
};