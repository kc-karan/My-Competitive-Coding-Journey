#include <bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long

int main() {

	fio();
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i++) cin >> arr[i];
		reverse(arr.begin(), arr.end());
		for(int i = 0 ; i < n; i++) cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}