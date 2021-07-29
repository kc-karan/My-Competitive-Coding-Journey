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

ll a[MAX];
int main()
{
	int t;
	cin >> t;
	a[0] = 2;
	for (int i = 1; i < MAX; i++)
	{
		a[i] = a[i - 1] + 3 * i + 2;
	}
	while (t--)
	{
		ll n;
		cin >> n;
		int ans = 0;
		while (n >= 2)
		{
			int l = 0, r = MAX, mid;
			while (l < r)
			{
				mid = (l + r + 1) >> 1;
				if (a[mid] > n)
					r = mid - 1;
				else
					l = mid;
			}
			ans += n / a[r];
			n = n % a[r];
		}
		printf("%d\n", ans);
	}
	return 0;
}