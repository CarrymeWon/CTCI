#include<iostream>
#include<string>

using namespace std;
/*Palindrome is case non-sensitive*/
bool palinPermutation(string s1) {
	int len = s1.length();
	int a[26];
	memset(a, 0, sizeof(a));
	for (int i = 0; i < len; i++) {
		int val = (int)s1[i];
		/* lowercased letters ascii are from 97 to 122,
		uppercased letters ascii are from 65 to 90*/
		if (val >= 65 && val < 90) {
			val -= 'A';
			a[val] = (a[val] + 1) % 2;
		}
		if (val >= 97 && val <= 122) {
			val -= 'a';
			a[val] = (a[val] + 1) % 2;
		}
	}

	/*check if the hash has no more than 1 odd value*/
	bool mark = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i] != 0)
		{
			if (mark == 0)
				mark = 1;
			else
				return 0;
		}
			
	}
	return 1;
}

int main(){
	string s1;
	getline(cin, s1);
	cout << palinPermutation(s1) << endl;

}