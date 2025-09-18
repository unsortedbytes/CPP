#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	int n=0;
	long long int sum=0;
	while(true){
		sum+=n*(n+1)/2;
		if(sum>t){
			n--;
			break;

		}
		n++;
	}
	cout<<n<<endl;
}