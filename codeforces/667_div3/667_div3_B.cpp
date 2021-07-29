#include <bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(0);cin.tie(NULL)
#define ll long long

int main() {

	ll t; cin >> t;
	while(t--) {
		ll a,b,x,y,n, ans1 = 0, ans2 = 0;
		cin >> a >> b >> x >> y >> n;
		ll tempn = n, tempa = a, tempb = b, tempdiff = 0;
		
		tempdiff = min(a-x, n);
		a -= tempdiff;
		n -= tempdiff;
		b -= min(b-y, n);
		ans1 = a*b;

		tempdiff = min(tempb-y, tempn);
		tempb -= tempdiff;
		tempn -= tempdiff;
		tempa -= min(tempa-x, tempn);
		ans2 = tempa*tempb;

		cout << min(ans1,ans2) << endl;
	}
	return 0;
}