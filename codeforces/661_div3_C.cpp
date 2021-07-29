#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fio() ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)

ll ms[101];

int main() {

	fio();
	int t; cin >> t;
	while(t--) {
		ll n; cin >> n;
		ll* arr = new ll[n]();
		memset(ms, 0, sizeof(ms));
		for(int i = 0 ; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
		for(int i = 0 ; i < n ; i++) {
			for(int j = i+1 ; j < n; j++) {
				
			}
		}

	}
	return 0;
}