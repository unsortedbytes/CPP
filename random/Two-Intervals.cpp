#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		int mini=max(l1,l2);
		int maxi=min(r1, r2);
		if(maxi>=mini){
			cout<<mini<<" "<<maxi<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}