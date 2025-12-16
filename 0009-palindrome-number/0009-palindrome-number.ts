function isPalindrome(x: number): boolean {
    if(x<0 || x%10===0 && x!=0)return false;

    let reversedHalf=0;
    while(x>reversedHalf){
        reversedHalf=reversedHalf*10+(x%10);
        x=(x/10) |0;
    }
    return x===reversedHalf||x===((reversedHalf/10)|0);
    //math cagirmak maliyetli
};