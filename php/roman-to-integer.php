<?php
class Solution
{
    function romanToInt($s)
    {
        $romanMap = new SplObjectStorage();
        $o1 = new stdClass;
        $romanMap->offsetSet('I', 10);
        // $romanMap['I'] = 1;
        // $romanMap['V'] = 5;
        // $romanMap['X'] = 10;
        // $romanMap['L'] = 50;
        // $romanMap['C'] = 100;
        // $romanMap['D'] = 500;
        // $romanMap['M'] = 1000;

        return $romanMap['I'];
    }
}

$obj = new Solution();

var_dump($obj->romanToInt("MCMXCIV"));
