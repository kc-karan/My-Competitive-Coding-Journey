#include <bits/stdc++.h>
using namespace std;
#define fio ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define F(i,n) for(ll i = 0; i < n; i++)
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define mem(a,b) memset(a, b, sizeof(a))
#define pb push_back
#define popb pop_back
#define endl "\n"
#define mp make_pair
#define MOD 1000000007
#define sortv(v) sort(v.begin(),v.end())
#define rsortv(v) sort(v.begin(),v.end(), greater<>());
#define sortby(v,prop) sort( v.begin( ), v.end( ), [ ]( const auto& lhs, const auto& rhs ){ return lhs.prop < rhs.prop; });
#define rsortby(v,prop) sort( v.begin( ), v.end( ), [ ]( const auto& lhs, const auto& rhs ){ return lhs.prop > rhs.prop; });
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
typedef priority_queue<ll, vector<ll>, greater<ll> > minheap;
typedef priority_queue<ll> maxheap;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

ll modPower(ll num,ll r) {
	if(r==0) return 1;
	if(r==1) return num%MOD;
	ll ans=modPower(num,r/2)%MOD;
	if(r%2==0) {
		return (ans*ans)%MOD;
	} return (((ans*ans)%MOD)*num)%MOD;
}

ll __gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return __gcd(b % a, a); 
} 
 
int dr4[] = {0,1,0,-1}, dc4[] = {1,0,-1,0};
int dr8[] = {0,1,1,1,0,-1,-1,-1}, dc8[] = {1,1,0,-1,-1,-1,0,1};


//--------------------------------------------------------------------

//its a sport not a job

void solve() {
    int n,q; cin >> n; cin >> q;
    string s; cin >> s;
    int count0Left[n+2]; mem(count0Left, 0);
    int count1Left[n+2]; mem(count1Left, 0);
    int count0Right[n+2]; mem(count0Right, 0);
    int count1Right[n+2]; mem(count1Right, 0);
    
    for(int i = 0 ; i < n; i++) {
        if(s[i] == '0') {
            count0Left[i+1] = 1 + count0Left[i];
            count1Left[i+1] = count1Left[i];
        } else {
            count1Left[i+1] = 1 + count1Left[i];
            count0Left[i+1] = count0Left[i];
        }
    }
    
    for(int i = n-1 ; i >= 0; i--) {
        if(s[i] == '0') {
            count0Right[i+1] = 1 + count0Right[i+2];
            count1Right[i+1] = count1Right[i+2];
        } else {
            count1Right[i+1] = 1 + count1Right[i+2];
            count0Right[i+1] = count0Right[i+2];
        }
    }

    for(int i = 0 ; i < q ; i++) {
        int l,r; cin >> l >> r;
        int flg = 0;
        if(s[l-1] == '0') {
            if(count0Left[l-1] > 0) flg = 1;
        } else {
            if(count1Left[l-1] > 0) flg = 1;
        }

        if(s[r-1] == '0') {
            if(count0Right[r+1] > 0) flg = 1;
        } else {
            if(count1Right[r+1] > 0) flg = 1;
        }

        if(flg) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}


int main() {
    fio;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}