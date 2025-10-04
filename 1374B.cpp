#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int countof2=0, countof3=0;
		while(n%2==0){
			n/=2;
			countof2++;
		}
		while(n%3==0){
			n/=3;
			countof3++;
		}
		if(n==1&& countof3>=countof2){
			cout<<(2*countof3)-countof2<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}