#include <bits/stdc++.h>
using namespace std;
#define int long long

bool validPalindrome(int r, int b , int g, int w) {
	return ((r&1) + (b&1) + (g&1) + (w&1) <= 1);
}

signed main() {

	int t;
	cin >> t;
	while(t--) {
		int r,b,g,w;
		cin >> r >> b >> g >> w;
		int ans = (r%2) + (b%2) + (g%2) + (w%2);
		
		if(validPalindrome(r,b,g,w)) {
			cout << "Yes" << endl;
		}else if((r > 0 && b > 0 && g > 0) && validPalindrome(r-1,b-1,g-1,w+1)) {
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
	return 0;
}