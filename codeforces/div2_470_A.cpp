#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {-1, 1, 0, 0};
int n,m;

bool isValid(int x, int y) {
	return (x >= 0 && x < n && y >= 0 && y < m);
}

int main() {

	
	cin >> n >> m;
	char** matrix = new char*[n];
	for(int i = 0 ; i < n ; i++) {
		matrix[i] = new char[m];
		for(int j = 0 ; j < m ; j++) {
			cin >> matrix[i][j];
		}
	}

	for(int x = 0 ; x < n ; x++) {
		for(int y = 0 ; y < m ; y++) {
			if(matrix[x][y] == 'S') {
				for(int i = 0 ; i < 4; i++) {
					int newX = x + dx[i];
					int newY = y + dy[i];
					if(isValid(newX, newY)) {
						if(matrix[newX][newY] == 'W') {
							cout << "No" << endl;
							return 0;
						}else if(matrix[newX][newY] == '.') {
							matrix[newX][newY] = 'D';
						}
					} 
				}
			}
		}
	}

	cout << "Yes" << endl;
	for(int i = 0 ; i < n; i++) {
		for(int j = 0 ; j < m; j++) {
			cout << matrix[i][j];
		}
		cout << endl; 
	}
	return 0;
}