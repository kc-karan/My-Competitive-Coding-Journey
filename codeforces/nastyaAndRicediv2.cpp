#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b,c,d,i;
    cin>>t;
    while(t--){
        cin>>n>>a>>b>>c>>d;
        int j=0;
        int lower=n*(a-b);
        int higher=n*(a+b);
        int sobm=c-d;
        int soba=c+d;
        if(lower>soba){
            j=1;
        }
        else if(higher<sobm){
            j=1;
        }
        if(j==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
        return 0;
}
