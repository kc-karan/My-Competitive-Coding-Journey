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

bool checkPalindrome(int num) {
	int len = 0;
	while((1<<len) <= num)
	{
		len++;
	}
	len--;
	cout << len << endl;
	return false;
}


int main() {
	
	IO;
	int num;
	cin >> num;
	prt(checkPalindrome(num));
	return 0;

}