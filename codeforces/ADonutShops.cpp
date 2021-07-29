#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(ll a, ll b, ll c) {
	if (a < c) 
		cout << 1 << " ";
    else 
    	cout << -1 << " ";
 
    if (b * a > c) 
    	cout << b << endl;
    else 
    	cout << -1 << endl;
}

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		ll cost1, cost2, doeNum;
		cin >> cost1 >> doeNum >> cost2;
		solve(cost1, doeNum, cost2);
	}
	return 0;
}