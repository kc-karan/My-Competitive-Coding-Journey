#include<bits/stdc++.h>
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
#define w_is(a)     cerr << #a << " " << a << "\n";
#define ull 		unsigned long long
#define vl          vector<ll>
#define pb			push_back

int main() {
	
	IO;
	int t;
	cin >> t;
	while(t--)
	{
		ll num;
		cin >> num;
		if((num/2)%2 != 0)
		{
			prt("NO");
			continue;

		}else{
			
			ll sum = 0;
			ll n = 2;
			ll* ans = new ll[num];
			for(int i = 0; i < num/2; i++)
			{
				sum += n;
				ans[i] = n;
				n += 2;
			}
			ll tempSum = 0;
			ll start = 1;
			for(int i = num/2; i < num - 1; i++)
			{
				tempSum += start;
				ans[i] = start;
				start += 2;

			}
			ans[num-1] = num - tempSum;
			prt("YES");
			for(int i = 0; i < num; i++)
			{
				cout << ans[i] << " ";
			}
			cout << endl;
		}
	}



	return 0;

}