#include <iostream>
#include <map>
using namespace std;
int main() {
	map<char,int>romanMap;
	
	romanMap.insert(pair<char,int>('I',1));
	romanMap.insert(pair<char,int>('V' ,5));
	romanMap.insert(pair<char,int>('X' ,10));
	romanMap.insert(pair<char,int>('L' ,50));
	romanMap.insert(pair<char,int>('C' ,100));
	romanMap.insert(pair<char,int>('D' ,500));
	romanMap.insert(pair<char,int>('M' ,1000));
	
	const int n = romanMap.size();

  // printing map gquiz1
    map<char, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = romanMap.end(); itr != romanMap.begin(); --itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

}
