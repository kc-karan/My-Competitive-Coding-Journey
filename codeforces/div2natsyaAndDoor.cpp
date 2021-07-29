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
	
	io;
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,k;
		cin >> n >> k;
		ll* mountains = new ll[n];
		for(ll i = 0 ; i < n; i++)
		{
			cin >> mountains[i];
		}
		ll* countPeaks = new ll[n]();
		for(ll i = 1 ; i < n-1; i++)
		{
			if(mountains[i] > mountains[i-1] && mountains[i] > mountains[i+1])
			{
				countPeaks[i] = 1;
			}
		}
		ll totalPieces = 0;
		for(ll i = 0; i < n-k+1; i++)
		{
			ll j = i+1;
			ll tempPeaks = 0;
			while(j < i+k-1)
			{
				if(countPeaks[j] == 1)
				{
					tempPeaks++;
				}
				j++
			}
			if(totalPieces < tempPeaks)
				totalPieces = tempPeaks;
			i = j;
		}
		cout << 

	}
	



	return 0;

}