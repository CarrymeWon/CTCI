#include <iostream>
#include<cstring>

using namespace std;
/* characters in both of given strings are encoder by ASCII*/
bool checkPermutation(string str1, string str2) {

	int len1 = str1.length(), len2 = str2.length();
	bool  b[256];
	memset(b, 0, sizeof(b));

	for (int i = 0; i < len2; ++i) {
		int val2 = (int)str2[i];
		b[val2] |= 1;
	}

	for (int j = 0; j < len1; ++j) {
		int val1 = (int)str1[j];
		if (b[val1] == 0) return 0;
	}
	return 1;

}

void main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << checkPermutation(s1, s2) << endl;

}