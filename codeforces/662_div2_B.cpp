#include <bits/stdc++.h>
using namespace std;

int main() {

	int n, m, si, sj;
	cin >> n >> m >> si >> sj;
	cout << si << " " << sj << endl;
	int** visited = new int*[n+1]();
	for(int i = 0 ; i <= n ; i++) {
		visited[i] = new int[m+1]();
	}
	return 0;
}