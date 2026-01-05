class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        /*sehirler var ve dogrudan veya dolayli olarak bagliysa ayni eyalettedir
        bizden toplam kac eyalet oldugunu soruyor bunun icinde bagintilar mantigini
        kullanicaz kumler ve node kullanarak basitce cozucez*/
        //vector c++ da dizilerin kullanisli halidir yani bize bir nxn matris vermisler
         int sehirSayisi=isConnected.size();
    vector<int>il(sehirSayisi);//vector olusturduk
    for(int i=0;i<sehirSayisi;i++)il[i]=i;//her sehir il olsun dedik
    int ilSayisi=sehirSayisi;
    for(int i=0;i<sehirSayisi;i++){
        for(int j=i+1;j<sehirSayisi;j++){
            if(isConnected[i][j]){
                int baskani=i;
                while(il[baskani]!=baskani){baskani=il[baskani];}
                int baskanj=j;
                while(il[baskanj]!=baskanj){baskanj=il[baskanj];}
                //farkli illeri brlestiricez
                if(baskani!=baskanj){
                    il[baskanj]=baskani;
                    ilSayisi--;
                }
            }
        }
    }
    return ilSayisi;
    }
};