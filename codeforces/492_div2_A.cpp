#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
	int n;
	cin >> n;
	//1,5,10,20,100
	int ans = 0;
	ans += n/100; n %= 100; //cout << n << endl;
	ans += n/20; n %= 20; //cout << n << endl;
	ans += n/10; n %= 10; //cout << n << endl;
	ans += n/5; n %= 5; //cout << n << endl;
	ans += n;
	cout << ans << endl;
	return 0;
}