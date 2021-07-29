#include <bits/stdc++.h>
using namespace std;
 
string check(string &s, string &r, int x){
	string t=s;
	for(int i=x,j=0;j<7;i++,j++){
		if(t[i]==r[j]) continue;
		else if(t[i]=='?') t[i]=r[j];
		else return "";
	}
	for(int i=0;i<s.size();i++){
		if(t[i]=='?') t[i]='z';
	}
	int cnt=0;
	for(int i=0;i<=s.size()-7;i++){
		if(t.substr(i,7)=="abacaba") cnt++;
	}
	if(cnt==1) return t;
	return "";
}
 
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		string r="abacaba";
		for(int i=0;i<=n-7;i++){
			string t=check(s,r,i);
			if(t.size()>0){
				cout << "Yes" << endl;
				cout << t << endl;
				break;
			} else if(n-7==i){
				cout << "No" << endl;
				break;
			}
		}
	}
	return 0;
}