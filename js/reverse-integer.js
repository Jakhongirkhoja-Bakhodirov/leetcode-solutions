const reverse = function(x) {
    var initial = Math.abs(x);
    var rev_num = 0;
    while(initial>0) {
        rev_num = rev_num * 10 + initial%10;
        initial = Math.floor(initial/10);
        if(rev_num > Math.pow(2,31) - 1 || rev_num < -Math.pow(2,31)) {
            return 0;
        }
    }

    if(x < 0) {
        return rev_num * (-1);
    }
    return rev_num
}

console.log(reverse(1563847412));
