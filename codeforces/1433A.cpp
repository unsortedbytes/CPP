#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int digit = 0;
		digit+=10*(n%10 - 1);
		int no_of_digit =0;
		while(n){
			no_of_digit++;
			n/=10;
		}
		if(no_of_digit == 1) {
			digit+=1;
		}else if (no_of_digit==2){
			digit+=3;
		}else if(no_of_digit == 3){
			digit+=6;
		}else if (no_of_digit == 4){
			digit+=10;
		}

		cout<<digit<<endl;
	}
}