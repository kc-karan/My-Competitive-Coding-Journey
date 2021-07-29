#include <bits/stdc++.h>
using namespace std;

int main() {

		int n;
		cin >> n;
		int* arr = new int[n+2];
		for(int i = 1 ; i <= n; i++) {
			cin >> arr[i];
		}
		for(int i = 1 ; i <= n; i++) {
			if(arr[arr[arr[i]]] == i) {
				cout << "YES" << endl;
				return 0;
			}
		}
		
		cout << "NO" << endl;
		
	return 0;
}