#include <bits/stdc++.h>
using namespace std;

#define IO          ios::sync_with_stdio(0); cin.tie(NULL)
#define MOD 		1000000007
#define MAX			1000001
#define ll 			long long
#define nl 			cout << "\n"
#define mp 			make_pair
#define fi   		first
#define se 			second
#define dbg         cout << "Debug...\n"
#define prt(a)      cout << a << "\n"
#define vi			vector<int>
#define vb 			vector<bool>
#define w_is(a)     cerr << #a << " " << a << "\n"
#define ull 		unsigned long long
#define vl          vector<ll>
#define pb			push_back

void getColouring(int** arr, int row, int col, int n, int m) {

	
}

 
int main() {
	IO;
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		char** arr = new char*[n];
		for(int i = 0; i < m ; i++)
		{
			arr[i] = new char[m];
		}
		for(int i = 0 ; i < n; i++)
		{
			for(int j = 0; j < m ; j++)
			{
				arr[i][j] = 'B';
			}
		}

		for(int i = 0 ; i < n; i++)
		{
			for(int j = 0 ; j< m; j++)
			{
				getColouring(arr, i, j, int n, int m);
			}
		}

		for(int i = 0 ; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cout << arr[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}