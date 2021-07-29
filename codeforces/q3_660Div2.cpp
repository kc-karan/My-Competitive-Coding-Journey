#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {

	ll t;
	cin >> t;
	while(t--) {
		ll cities, citizen;
		cin >> citizen >> citizen;
		int *population = new int[cities+1];
		for(int i = 1 ; i <= cities; i++) {
			cin >> population[i];
		}
		int *hi = new int[cities+1];
		for(int i = 1; i <= cities; i++) {
			cin >> hi[i];
		}
		vector<int> adj[n];
		for(int i = 0 ; i < n - 1; i++) {
			int t1, t2;
			adj[t1].pb(t2);
			adj[t2].pb(t1);
		}

	}
	return 0;
}