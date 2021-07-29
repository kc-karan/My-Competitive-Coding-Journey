#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, arr[100001];

signed main() {
	cin >> n;
	int temp[n];
	for(int i = 0 ; i < n; i++) cin >> temp[i];
	memset(arr, 0, sizeof(arr));
	for(int i = 0 ; i < n; i++) arr[temp[i]]++;
	int dp[100001];
	dp[0] = 0;
	dp[1] = arr[1];
	for(int i = 2; i < 100001; i++) {
		dp[i] = max(dp[i-1], dp[i-2] + arr[i]*i);
	}
	cout << dp[100000] << endl;
	return 0;
}