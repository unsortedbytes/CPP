#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool good = true;
		int nodeff_even = 0;
		int nodeff_odd = 0;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			if(x%2 != i%2){
				good = false;
				if(i%2==0) {
					nodeff_even++;
				}else{
					nodeff_odd++;
				}
			}
		}

		if(good){
			cout<<0<<endl;
		}else if (!good &&(nodeff_even==nodeff_odd)){
			cout<<((nodeff_even+nodeff_odd)/2)<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}