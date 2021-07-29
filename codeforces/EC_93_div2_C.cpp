#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
// #define int long long
// #define vi vector<int>
// #define pb push_back

// int solve(vector<int>& a) {
// 	unordered_map<int,int> m;
// 	m[0]++;
// 	int sum = 0, res = 0;
// 	for(int i = 0 ; i < a.size(); i++) {
// 		sum += a[i];
// 		int x = sum-i-1;
// 		res += m[x];
// 		m[x]++;
// 	}
// 	return res;
// }
// // 
// signed main() {
// 	ios::sync_with_stdio(0);
// 	cin.tie(NULL);
// 	int t;
// 	cin >> t;
// 	while(t--) {
// 		int n; cin >> n;
// 		string s; cin >> s;
// 		vi arr;
// 		for(int i = 0 ; i < n; i++) {
// 			arr.pb((int)(s[i] - '0'));
// 		}
// 		cout << solve(arr) << endl;
// 	}
// 	return 0;
// }
int lcs_dp(string s, string t){
		int m=s.size();
	int n=t.size();
	int** ans= new int*[m+1];
	for(int i=0;i<=m;i++){
		ans[i]=new int[n+1];
	}
	
   //fill the 0th row with 0
   for(int j=0;j<=n;j++){
   	ans[0][j]=0;
   } 	
   //fill the 0th col with 0
   for(int i=0;i<=m;i++){
   	ans[i][0]=0;
   }
   
   //for the remaining
   for(int i=1;i<=m;i++){
   	for(int j=1;j<=n;j++){
   		if(s[i-1]==t[j-1]){
   			ans[i][j]= 1+ ans[i-1][j-1];
		   }
		else{
			int a=ans[i-1][j];
			int b=ans[i][j-1];
			ans[i][j]= max(a, b);
		}   
	   }
   }
   
	return ans[m][n];
}


int main() {
	string s, t;
	cin >> s >> t;
	//cout << lcs(s, t) << endl;
	cout<< lcs_dp(s, t)<<endl;
	return 0;
}
