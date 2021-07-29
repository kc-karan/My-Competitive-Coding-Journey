#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0;i<n;i++)
	{
		cin>>v[i];	
	}	
	cout<<1<<" "<<n<<endl;
	for(long long i=0;i<n;i++)
	{
		cout<<-1*v[i]*n<<" ";
	}
	cout<<endl;
	if(n==1)
	{
		cout<<1<<" "<<1<<endl;
		cout<<0<<endl;
		cout<<1<<" "<<1<<endl;
		cout<<0<<endl;
		return 0;
	}
	cout<<1<<" "<<n-1<<endl;
	for(long long i=0;i<n-1;i++)
	{
		cout<<v[i]*(n-1)<<" ";
	}
	cout<<endl;
	cout<<n<<" "<<n<<endl;
	cout<<v[n-1]*(n-1)<<endl;
	
	return 0;
}