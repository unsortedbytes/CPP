#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int l, r, a;
		cin>>l>>r>>a;
		// int maxi=INT_MIN;
		// for(int i=r;i>=max(l, r-a);i--){
		// 	int temp=(i/a)+(i%a);
		// 	maxi = max(temp, maxi);
		// }
        
		int x=(r/a)+(r%a);
		int y=(l/a)+(l%a);
		// int z=((a*((r/a)-1))/a) + (a-1);
		int z;
		if(l>=1LL*a*(r/a)){
			z=INT_MIN;	
		}else{
			z=((a*((r/a)-1))/a) + (a-1);
		}
		int maxi=max(x,max(y,z));	

		cout<<maxi<<endl;
	}
}