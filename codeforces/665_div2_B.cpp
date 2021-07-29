#include <bits/stdc++.h>
using namespace std;
#define fio() ios::sync_with_stdio(0); cin.tie(NULL)
#define ll long long 
#define vi vector<int>
#define vll vector<long long>

int main() {
	fio();
	int t; cin >> t;
	while(t--) {
		ll a[3], b[3], t1 = 0, t2 = 0, t3 = 0;
		for(int i = 0 ; i < 3; i++) cin >> a[i];
		for(int i = 0 ; i < 3; i++) cin >> b[i];
		ll count = 0;
		
		t1 = min(a[2], b[1]);
		count += 2*t1;
		a[2] -= t1; 
		b[1] -= t1;
		
		t2 = min(a[1], b[0]);
		a[1] -= t2;
		b[0] -= t2;
		
		t3 = min(a[0], b[2]);
		a[0] -= t3;
		b[2] -= t3;
		
		count -= 2*min(a[1], b[2]);
		cout << count << endl;
	}
	return 0;
}