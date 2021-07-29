#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back

bool compare(int n1, int n2) {
	return n1 > n2;
}

int solve(string s) {
	int n = s.length();
	int count = 0;
	vi arr;
	for(int i = 0 ; i < s.length(); i++) {
		if(s[i] == '1') {
			count++;
		} else {
			arr.pb(count);
			count = 0;
		}
	}
	arr.pb(count);
	sort(arr.begin(), arr.end(), compare);
	int ans = 0;
	for(int i = 0 ; i < arr.size(); i++) {
		//cout << arr[i]
		if(i % 2 == 0) {
			ans += arr[i];
		}
	}
	return ans;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}