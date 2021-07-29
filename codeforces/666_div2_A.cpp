#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int* arr = new int[27]();
		for(int i = 0 ; i < n; i++) {
			string s; cin >> s;
			for(int i = 0 ; i < s.length(); i++) {
				int idx = (int)(s[i] - 'a');
				arr[idx]++;
			}
		}
		bool ans = 1;
		for(int i = 0 ; i < 27; i++) {
			if(arr[i] % n != 0) {
				ans = 0; break;
			}
		}
		if(!ans) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}