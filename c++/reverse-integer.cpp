#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int reverse(int x){
	int initial = abs(x);
	int rev_num = 0;
	while(initial> 0) {
		rev_num = rev_num*10 + initial%10;
		initial = initial/10;
		if(rev_num > pow(2,31) - 1 || rev_num < -pow(2,31)) {
			return 0;
		}
	}
	if(x < 0) {
		return -rev_num;
	}
	return rev_num;
}	
int main() {
	cout << reverse(1534236469);
}
