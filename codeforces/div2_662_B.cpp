#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mx =1e5+7;
int main()
{
int i,j,k,n,t,q;
cin>>n;
int cnt[mx],x,ans2=0,ans4=0;
char c;
memset(cnt,0,sizeof cnt);
for(i=0;i<n;i++)
{	
    scanf("%d",&x);
    ans2-=cnt[x]/2;
    ans4-=cnt[x]/4;
    cnt[x]++;
    ans2+=cnt[x]/2;
    ans4+=cnt[x]/4;
}
cin>>q;
while(q--){
	cin>>c>>x;
	ans2-=cnt[x]/2;
	ans4-=cnt[x]/4;
	if(c=='+')
		cnt[x]++;
	else
    	cnt[x]--;
	ans2+=cnt[x]/2;
	ans4+=cnt[x]/4;
	if(ans2>=4&&ans4>=1)
    	cout<<"YES\n";
	else
    	cout<<"NO\n";
}
return 0;
}