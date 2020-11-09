#include<iostream>
#include<string>
using namespace std;

/* 1.1 Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
cannot use additional data structures?*/
bool isUniqueChars(string str) {
	if (str.length() > 128) return false;
	bool char_set[128] = { 0 }; // new array with 128 bool_size, all elements 0
	for (int i = 0; i < str.length(); i++) {
		int val = str[i];
		if (char_set[val])return false;
		char_set[val] = true;
	}
	return true;
}

//void main() {
//
//	string input;
//	cin >> input;
//	cout << input << endl;
//	cout << isUniqueChars(input) << endl;
//
//}
