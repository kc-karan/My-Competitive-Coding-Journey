#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

signed main() {

	int n;
	cin >> n;
	int res = 1, fact = 1;
	for(int i = 1; i <= n - 1; i++) {
		res *= 2;
		fact *= i;
		res %= MOD;
		fact %= MOD;
	}
	fact *= n;
	fact %= MOD;
	fact -= res;
	fact %= MOD;
	if(fact < 0) fact += MOD;
	cout << fact << endl;

	return 0;
}