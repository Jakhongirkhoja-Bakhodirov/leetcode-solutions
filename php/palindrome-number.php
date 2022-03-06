<?php

function isPalindrome($x)
{
    $rev_num = 0;
    $initial = $x;
    while ($x > 0) {
        $rev_num = $rev_num * 10 + $x % 10;
        $x = floor($x / 10);
    }
    if ($rev_num == $initial) {
        return true;
    }
    return false;
}

var_dump(isPalindrome(-121));
