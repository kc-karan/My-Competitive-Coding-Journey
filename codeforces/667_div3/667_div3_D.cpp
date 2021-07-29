#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fio() ios::sync_with_stdio(0); cin.tie(NULL)

ll sum(ll n) {
	ll sum = 0;
	while(n > 0) {
		ll dig = n%10;
		sum += dig;
		n /= 10;
	}
	return sum;
}

int main() {
	fio();
	int t; cin >> t;
	while(t--) {
		ll n,s, ans = 0;
		cin >> n >> s;
		if(sum(n) <= s) {
			cout << 0 << endl;
			continue;
		}
		ll pw = 1;
		for(int i = 0 ; i < 18; i++) {
			ll dig = (n/pw) % 10;
			ll add = pw * ((10-dig)%10);
			n += add;
			ans += add;
			if(sum(n) <= s) {
				break;
			}
			pw *= 10;
		}
		cout << ans << endl;
	}
	return 0;
}