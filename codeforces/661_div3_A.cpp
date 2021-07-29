#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> arr;
		for(int i = 0 ; i < n; i++) {
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}
		sort(arr.begin(), arr.end());
		bool flag = 1;
		for(int i = 1 ; i < n; i++) {
			flag &= (arr[i] - arr[i-1] <= 1);
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}