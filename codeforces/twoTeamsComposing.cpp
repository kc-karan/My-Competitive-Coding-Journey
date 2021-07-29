#include<bits/stdc++.h>
using namespace std;

#define IO          ios::sync_with_stdio(0); cin.tie(NULL)
#define MOD 		1000000007
#define MAX			200001
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
		int n;
		cin >> n;
		int* arr = new int[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		int* count = new int[MAX];
		for(int i = 0 ; i < MAX; i++)
		{
			count[i] = 0;
		}
		for(int i = 0; i < n; i++)
		{
			count[arr[i]]++;
		}
		int distinct =  0;
		int max = 0;

		for(int i = 0 ; i < MAX; i++)
		{
			if(count[i] != 0)
				distinct++;

			if(count[i] > max)
				max = count[i];

		}

		prt(min(max,distinct));

		


	}


	return 0;
}