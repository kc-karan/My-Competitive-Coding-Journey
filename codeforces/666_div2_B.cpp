#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int c1,c2;
	c1=(int)pow(a[n-1],1.0/(n-1.0));
	c2=c1++;
	//cout << c1 << " " << c2 << endl;
	unsigned long long ans1=0,ans2=0;
	for(int i=0;i<=n-1;i++){
		ans1+=abs(a[i]-(int)pow(c1,i));
		ans2+=abs(a[i]-(int)pow(c2,i));	
		//cout << ans1 << " " << ans2	<< endl;
	}
	cout<<min(ans1,ans2)<<endl;
	return 0;
}
