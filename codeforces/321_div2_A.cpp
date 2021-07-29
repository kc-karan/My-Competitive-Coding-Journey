#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i = 0 ; i < n; i++) {
		cin >> arr[i];
	}
	int* dp = new int[n]();
	dp[0] = 1;
	for(int i = 1 ; i < n; i++) {
		dp[i] = 1;
		if(arr[i-1] <= arr[i])
			dp[i] = dp[i-1] + 1;
	}
	int maxAns = 1;
	for(int i = 0 ; i < n ; i++) {
		maxAns = max(maxAns, dp[i]);
	}
	cout << maxAns << endl;
	return 0;
}