#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back

void solve(vi &arr) {
	int n = arr.size();
	vi dp(n);
	dp[0] = 1;
	int maxGrp = 1;
	for(int i = 1 ; i < n; i++) {
		if(!(arr[i-1]^arr[i])) dp[i] = 1 + dp[i-1];
		else dp[i] = 1;
		maxGrp = max(maxGrp, dp[i]);
	}
	cout << maxGrp << endl;
	for(int i = 0 ; i < n; i++) {
		cout << dp[i] << " ";
	}
	cout << endl;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		string s; cin >> s;
		vi arr;
		for(int i = 0 ; i < s.length() ; i++) {
			arr.pb((int)(s[i] - '0'));
		}
		solve(arr);
	}
	return 0;
}

