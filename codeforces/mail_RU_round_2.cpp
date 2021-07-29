#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int* left = new int[n+1];
	int* right = new int[n+1];
	for(int i = 1 ; i <= n; i++) {
		cin >> left[i];
	}
	for(int j = 1 ; j <= n ; j++) {
		cin >> right[j];
	}

	if(left[1] == 0) {
		cout << "NO" << endl;
		return 0;
	}

	int flag = 0;
	for(int i = m+1 ; i <= n; i++) {
		if(left[i] == 1 && right[i] == 1) {
			flag = 1;
		}
	}

	if((flag && left[1] && right[m]) || (left[1] && left[m])) {
		cout << "YES" << endl;
		return 0;
	}


	

	cout << "NO" << endl; 
	return 0;
}