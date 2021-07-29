#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		ll a,b;
		cin >> a >> b;
		if(a == 1) {
			cout << a << " " << b << endl;
		}else if(2*a <= b) {
			cout << a << " " << 2*a << endl;
		} else {
			cout << "-1" << " " << "-1" << endl;
		}
	}
	return 0;
}