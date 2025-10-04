#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n>=0){
		cout<<n<<endl;
	}else{
		n=-n;
		int a=n%10;
		// cout<<a<<endl;
		int b=(n/10)%10;
		// cout<<b<<endl;
		if(a>=b){
			cout<<-(n/10);
		}else{
			cout<<-((n/100)*10 + (a));
		}
	}
}