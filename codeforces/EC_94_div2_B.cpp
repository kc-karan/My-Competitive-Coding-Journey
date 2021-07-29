#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--) {
		ll p,f,cntS,cntW,s,w, ans=0;
		cin >> p >> f >> cntS >> cntW >> s >> w;
		if(f > p) swap(p,f);
		if(w < s) {
			swap(s,w);
			swap(cntS, cntW);
		}
		for(ll i = 0 ; i <= cntS; i++) {
			ll count = 0, tp = p, tf = f, tcntS = cntS, tcntW = cntW;
			if(i*s <= tp) {
				count = i;
				tcntS -= i;
				tp -= (i*s);
			}
			ll temp = min(tp/w, tcntW);
			count += temp;
			tcntW -= temp;
			temp = min(tf/s, tcntS);
			count += temp;
			tf -= temp*s;
			temp = min(tf/w, tcntW);
			count += temp;
			ans = max(ans, count);
		}
		cout << ans << endl;
	}
	return 0;
}