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
	char* letters = new char[26];
	char l = 'a';
	for(int i = 0 ; i < 26; i++)
	{
		letters[i] = l++;
		//prt(letters[i]);
	}

	while(t--)
	{
		int n,a,b;
		cin >> n >> a >> b;
		string str;
		int flag = 0;
		for(int i = 0 ; i < a;)
		{
			for(int j = 0; j < b; j++)
			{
				str += letters[j];
				if(i >= a)
				{
					flag = 1;
					break;
				}
				i++;
			}
			if(flag)
				break;
		}
		//n prt(str);
		string ans;
		flag = 0;
		for(int i  = 0 ; i < n;)
		{
			for(int j = 0 ; j < str.length(); j++)
			{
				ans += str[j];
				if(i >= n)
				{
					flag = 1;
					break;
				}
				i++;
			}
			if(flag)
				break;
		}
		for(int i = 0; i < n; i++)
		{
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}