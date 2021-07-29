#include <bits/stdc++.h>
using namespace std;
#define MAX 1000001


int main() {

	int n;
	cin >> n;
	// if(n <= 2) {
	// 	if(n == 1) {
	// 		cout << 1 << endl;
	// 		return;
	// 	}

	// 	if(n == 2) {
	// 		cout << 7 << endl;
	// 		return;
	// 	}
	// }
	bool* seive = new bool[MAX]();
	for(int i = 2 ; i*i < MAX; i++) {

		if(!seive[i])
			for(int j = i*i; j < MAX; j += i) {
				seive[j] = 1;
			}
	}

	for(int i = 1 ; i <= 1000 ; i++) {
		if(seive[n*i + 1] == 1) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}