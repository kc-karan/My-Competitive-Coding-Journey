#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		if(m > n)
			swap(n,m);
		int ans = 0;
		if(n%2 == 0 && m%2 == 0)
		{
			ans = n*(m/2);
		}else if(n%2 != 0 && m%2 != 0){
			ans = (n*(m/2)) + ((n+1)/2);
		}else{
			if(n%2 == 0)
			{
				ans = (n*(m/2)) + (n/2);
			}else{
				ans = (n*(m/2));
			}
		}
		cout << ans << endl;
	}
}