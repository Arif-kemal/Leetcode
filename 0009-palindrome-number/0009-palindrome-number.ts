function isPalindrome(x: number): boolean {
    const reversedX=x.toString().split("").reverse().join("");

    if(reversedX===x.toString()) return true;
    return false
};