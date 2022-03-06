#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int rev_num = 0, initial = x;
		while(x > 0) {
        	rev_num = rev_num * 10 + x%10;
        	x=x/10;
		}
		if(rev_num == initial) {
			return true;
		} 
		return false;
    }
};
int main() {
	Solution myObj;
	cout << myObj.isPalindrome(121);
}
