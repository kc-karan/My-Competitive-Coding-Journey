#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--) {
		string s; int k;
		cin >> s >> k;
		int n = s.length();
		int flg = 0;
		//cout << s << " " << k << endl;
		int arr[n]; //memset(arr, 1, sizeof(arr));
		for(int i = 0 ; i < n; i++) {
			arr[i] = 1;
		}
		for(int i = 0 ; i < n; i++) {
			int l = max(i-k, -1) == -1 ? -1 : i-k;
			int r = min(i+k, n) == n ? -1 : i+k;
			if(s[i] == '0') {
				if(l != -1) arr[l] = 0;
				if(r != -1) arr[r] = 0;	
			}
		}
		for(int i = 0 ; i < n; i++) {
			int l = max(i-k, -1) == -1 ? -1 : i-k;
			int r = min(i+k, n) == n ? -1 : i+k;
			int val1 = l == -1 ? 0 : arr[l];
			int val2 = r == -1 ? 0 : arr[r];
			if(s[i] == '1' && !(val1 || val2)) {
				flg = 1;
				break;
			}
		}
		if(flg) {
			cout << "-1" << endl;
		} else {
			for(int i = 0 ; i < n; i++) {
				cout << arr[i];
			}
			cout << endl;
		}
	}
	return 0;
}