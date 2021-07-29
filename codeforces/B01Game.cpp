#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int count_zeros = 0;
		int count_ones = 0;
		for(int i = 0 ; i < s.length(); i++)
		{
			if(s[i])
			{
				count_ones++;
			}else{
				count_zeros++;
			}
		}
		int ans = min(count_ones, count_zeros);
		if(ans%2 == 0)
		{
			cout << "NET" << endl;
		} else {
			cout << "DA" << endl;
		}
	}
	return 0;
}