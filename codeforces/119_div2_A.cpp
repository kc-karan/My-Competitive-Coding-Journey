#include <bits/stdc++.h>
using namespace std;
int main(){
  int k[4005],n,a,i,j;
  fill(k+1,k+4005,-1e9);cin>>n;
	for(;cin>>a;)for(i=a;i<=n;i++)k[i]=max(k[i],k[i-a]+1);
	cout<<k[n];
}