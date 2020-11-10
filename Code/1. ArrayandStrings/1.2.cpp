#include<iostream>
#include<cstring>

using namespace std;

bool checkPermutation(string s1, string s2) {
	int len1 = s1.length(), len2 = s2.length();
	if (len1 > len2) return 0;
	//implement by hash
	int a[26];
	memset(a, 0, sizeof(a));

	for(int i = 0; i< len1; ++i){
		a[s1[i] - 'a']++;
	}

	for (int j = 0; j < len2-len1+1 ; ++j) {
		int val2 = (int)s2[j]-'a';
		if (a[val2] > 0 && len1 == 1)return 1;
		else if (a[val2] >0)
		{
			int b[26];
			copy(begin(a), end(a), begin(b));
			b[val2]--;
			for (int i = 1; i < len1; ++i) {
				int val3 = (int)s2[j + i]-'a';
				if (b[val3] < 1) break;
				else b[val3]--;

				if (i == len1-1) return 1;
		}
			
		}
	}
	return 0;
}

void main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << checkPermutation(s1, s2) << endl;

}