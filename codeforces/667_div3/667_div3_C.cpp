#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
	int t; cin >>t;
	while(t--) {
		ll n,x,y;
		cin >> n >> x >> y;
		ll ansA = 50, ansD = 50;
		for(int a = 1; a <= 50; a++) {
			for(int d = 1; d <= 50; d++) {
				vector<ll> ap;
				for(ll i = a ; i < (a + n*d); i += d) {
					ap.pb(i);
				}
				auto it1 = find(ap.begin(), ap.end(), x);
				auto it2 = find(ap.begin(), ap.end(), y);
				if(it1 != ap.end() && it2 != ap.end()) {
					if(ap[ap.size()-1] < (ansA + (n-1)*ansD)) {
						ansA = a;
						ansD = d;
					}
				}
			}
		}
		for(int i = ansA; i < (ansA + n*ansD); i += ansD) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}