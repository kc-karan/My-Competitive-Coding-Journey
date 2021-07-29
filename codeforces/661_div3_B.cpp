#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[51], b[51], n, minA, minB;

int main() {

	ll t; 
	cin >> t;
	while(t--) {
		cin >> n;
		ll count = 0;
		minA = minB = INT_MAX;
		for(int i = 0 ; i < n; i++) {
			cin >> a[i];
			minA = min(minA, a[i]);
		}
		for(int i = 0 ; i < n; i++) {
			cin >> b[i];
			minB = min(minB, b[i]);
		}
		for(int i = 0 ; i < n; i++) {
			if(a[i] != minA && b[i] != minB) {
				
				if(a[i] - minA < b[i] - minB) {
					int temp = a[i] - minA;
					count += temp;
					a[i] -= temp;
					b[i] -= temp; 
				} else {
					int temp = b[i] - minB;
					count += temp;
					b[i] -= temp;
					a[i] -= temp;
				}
			}
		}
		for(int i = 0 ; i < n; i++) {
			if(a[i] != minA && b[i] == minB) count += a[i] - minA;
			else if(a[i] == minA && b[i] != minB) count += b[i] - minB;
		}
		cout << count << endl;
	}
	return 0;
}