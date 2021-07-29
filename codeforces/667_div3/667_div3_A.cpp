#include <bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(0);cin.tie(NULL)
#define ll long long

int main() {
	fio();
	ll t; cin >> t;
	while(t--) {
		ll a, b, ans = 0;
		cin >> a >> b;
		if(a > b) swap(a,b);
		ll num = b - a;
		for(int i = 10 ; i >= 1; i--) {
			ll div = num/i;
			ans += div;
			num -= div*i;
		}
		cout << ans << endl;
	}
	return 0;
}