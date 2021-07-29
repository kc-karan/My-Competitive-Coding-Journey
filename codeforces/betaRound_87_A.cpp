// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {

// 	int n;
// 	cin >> n;
// 	int* arr = new int[n+1];
// 	for(int i = 1 ; i <= n; i++) {
// 		cin >> arr[i];
// 	}

// 	int maxDepth = 0;
// 	int depth[n+1];
// 	//memset(depth, 1, sizeof(depth));
// 	for(int i = 0 ; i <= n ; i++) {
// 		depth[i] = 1;
// 	}

// 	for(int i = 1 ; i <= n ; i++) {
// 		if(arr[i] != -1) {
// 			depth[i] = depth[arr[i]] + 1;
// 		}
// 	}

// 	// for(int i = 1 ; i <= n; i++) {
// 	// 	cout << depth[i] << " ";
// 	// }
// 	// cout << endl;

// 	for(int i = 1 ; i <= n; i++) {
// 		maxDepth = max(maxDepth, depth[i]);
// 	}

// 	cout << maxDepth << endl;

// 	return 0;
// }

#include<iostream>
int main()
{
    int n,m=0,k,i=1,c,a[2002];
	for(std::cin>>n;i<=n;)
		std::cin>>a[i++];
	for(i=1;i<=n;i++)
    {
        k=a[i],c=0;
   		while(k>0)
   		k=a[k],c++;
   		m=c>m?c:m;
    }
	std::cout<<m+1;
 }