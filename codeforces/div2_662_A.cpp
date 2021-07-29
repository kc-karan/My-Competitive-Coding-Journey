#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		if(n == 1) {
			cout << 1 << endl;
		} else {
			cout << n/2 + 1 << endl;	
		}
	}
	return 0;
}