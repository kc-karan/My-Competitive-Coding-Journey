#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int* arr, int i, int j, int k) {
	if(arr[i] + arr[j] <= arr[k]) {
		return 0;
	}
	if(arr[j] + arr[k] <= arr[i]) {
		return 0;
	}
	if(arr[k] + arr[i] <= arr[j]) {
		return 0;
	}
	return 1;
}

signed main() {

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int* arr = new int[n]();
		for(int i = 0 ; i < n ; i++) {
			cin >> arr[i];
		}
		int i = 0,j = 1,k = 2;
		int flag = 0;
		for(; k < n; k++) {
			if(!check(arr, i, j, k)) {
				flag = 1;
				break;
			}
		}
		if(flag) {
			cout << i+1 << " " << j+1 << " " << k+1 << endl;
		} else {
			cout << -1 << endl;
		}
	}
	return 0;
}