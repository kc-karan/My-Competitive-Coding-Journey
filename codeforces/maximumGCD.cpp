#include <bits/stdc++.h>
using namespace std;
#define max 1000001

int* constructSeive() {
	int* seive = new int[max]();
	//memset(seive, 0, sizeof(seive));
	seive[0] = 0;
	seive[1] = 1;
	for(int i = 2 ; i < max; i++)
	{
		if(seive[i] == 0)
		{
			seive[i] = 1;
		}
		for(int j = 2*i; j < max; j += i)
		{
			seive[j] = i;
		}
	}
	return seive;
}


int main() {

	int t;
	int* seive = constructSeive();
	int curr_max = 0;
	for(int i = 0; i < max; i++)
	{
		if(seive[i] > curr_max)
		{
			curr_max = seive[i];
		}
		seive[i] = curr_max;
	}
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << seive[n] << endl;
	}
	return 0;
}