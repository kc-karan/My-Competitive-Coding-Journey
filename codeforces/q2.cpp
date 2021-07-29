#include <bits/stdc++.h>
using namespace std;

#define IO          ios::sync_with_stdio(0); cin.tie(NULL)
#define MOD 		1000000007
#define MAX			100001
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

int main() {
	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll* arr1 = new ll[n];
		ll* arr2 = new ll[n];
		for(int i = 0 ; i < n; i++)
			cin >> arr1[i];
		for(int i = 0 ; i < n; i++)
			cin >> arr2[i];
		if(arr1[0] != arr2[0])
		{
			prt("NO");
			continue;
		}
		int* check = new int[2]();
		int flag = 1;
		
		for(int i = 1; i < n; i++)
		{
			if(arr1[i-1] == 1)
			{
				check[2]++;
			}else if(arr1[i-1] == 0){
				check[1]++;
			}else{
				check[0]++;
			}

			if(arr2[i] > arr1[i])
			{
				if(check[2] == 0)
				{
					flag = 0;
					break;
				}
			}else if(arr2[i] < arr1[i]){
				if(check[0] == 0)
				{
					flag = 0;
					break;
				}
			}else if(arr2[i] == arr1[i]){
				if(check[1] == 0)
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag)
		{
			prt("YES");
		}else{
			prt("NO");
		}


	}


	return 0;
}