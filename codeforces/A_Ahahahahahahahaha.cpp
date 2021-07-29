#include <bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define pb push_back

int main() {
	fio();
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int arr[] = {0,0};
		for(int i = 0 ; i < n; i++) {
			int x; cin >> x;
			arr[x]++;
		}
		if(arr[0] >= arr[1]) {
			cout << arr[0] << endl;
			for(int i = 0 ; i < arr[0]; i++) cout << 0 << " ";
		} else {
			if(arr[1]&1) {
				arr[1]--;
			}
			cout << arr[1] << endl;
			for(int i = 0 ; i < arr[1] ; i++) cout << 1 << " ";
		}
		cout << endl;
	}
	return 0;
}

// int sum(int* arr, int n) {
// 	int os = 0, es = 0;
// 	for(int i = 0; i < n; i += 2) {
// 		os += arr[i]; es += arr[i+1];
// 	}
// 	return os - es;
// }

// int main() {

// 	fio();
// 	int t; cin >> t;
// 	while(t--) {
// 		int n; cin >> n;
// 		int* arr = new int[n]();
// 		for(int i =0  ; i < n; i++) cin >> arr[i];
// 		int a = sum(arr, n);
// 		int t = abs(a);
// 		int k = n - abs(a);
// 		vector<int> ans;
// 		if(a > 0) {
// 			for