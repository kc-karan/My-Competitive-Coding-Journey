#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		int* arr = new int[n]();
		for(int i = 0 ; i < n; i++) cin >> arr[i];
		ll minElem = INT_MAX, flag = 0;
		for(int i = 0 ; i < n-1; i++) {
			if(arr[i] > arr[i+1]) {
				flag = 1;
			}
			minElem = min(minElem, arr[i]);
		}
		minElem = min(minElem, arr[n-1]);
		if(!flag) {
			cout << "YES" << endl;
			continue;
		}
		for(int i = 0 ; i < n-1; i++) {
			for(int j = 0 ; j < n-i-1; j++) {
				if(arr[j] > arr[j+1]) {
					if(__gcd(arr[j], arr[j+1]) == minElem) {
						swap(arr[j], arr[j+1]);
					}
 				}
			}
		}
		int ans = 1;
		for(int i = 0 ; i < n-1 ; i++) {
			if(arr[i] > arr[i+1]) {
				ans = 0;
				break;
			} 
		}
		if(ans) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}