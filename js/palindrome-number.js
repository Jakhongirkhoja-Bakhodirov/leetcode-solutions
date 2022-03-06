var isPalindrome = function(x) {
    var rev_num = 0 , initial = x;
    if(x < 0) {
        return false;
    }
    while(x > 0) {
        rev_num = rev_num*10+x%10;
        x=Math.floor(x/10);
    }
    if(initial == rev_num) {
        return true;
    }
    return false;
}

console.log(isPalindrome(121));