<?php
class Solution
{
    public function reverseDigits($num)
    {
        $rev_num = 0;
        while ($num > 1) {
            $rev_num = $rev_num * 10 + $num % 10;
            $num = (int)$num / 10;
        }
        return $rev_num;
    }
}
