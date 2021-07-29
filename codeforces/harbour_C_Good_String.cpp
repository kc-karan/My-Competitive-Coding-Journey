#include <bits/stdc++.h>
using namespace std;

int solve(string s, int x, int y) {

	int res = 0;
	for(int i = 0 ; i < s.length(); i++) {
		int num = (int) s[i] - '0';
		if(num == x) {
			res++;
			swap(x,y);
		}
	}

	if(x != y && res % 2 == 1) {
		res--;
	}

	return res;
}

int solve(string s) {

	int maxAns = 0;
	for(int i = 0 ; i < 10; i++) {
		for(int j = 0 ; j < 10 ; j++) {
			maxAns = max(maxAns, solve(s, i, j));
		}
	}
	return maxAns;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << s.length() - solve(s) << endl;
	}
}