#include <bits/stdc++.h>
using namespace std;

int solve(int* arr, int n, int x) {
	int* prefix = new int[n]();
	prefix[0] = arr[0];
	int ans = -1;
	for(int i = 1; i < n; i++)
	{
		prefix[i] = prefix[i-1] + arr[i];
	}
	
	int i = 0, j = n-1;
	
	if(prefix[n-1] % x != 0)
		return n;
	
	while(i <= j)
	{
		if((prefix[j] - prefix[i])%x != 0)
		{
			return j-i;
		}
		i++;
	}

	return ans;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n >> x;
		int* arr = new int[n]();
		for(int i = 0 ; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << solve(arr, n, x) << endl;
	}
	return 0;
}