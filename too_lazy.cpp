#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
	for (int i=1;i<=a*b;i++){
		if(i%a ==0 && i%b == 0){
			return i;
		}
	}
	return a*b;
}

int main(){
	unsigned int A, B, C;
	cin>>A>>B>>C;
	int cth_value = 1;
	while(C){
		cth_value++;

		if(cth_value%A==0 || cth_value%B ==0) {
			C--;
		}
	}
	int Lcm = lcm(A,B);
	cout<<Lcm<<endl<<endl;
	int step;
	if(cth_value %A==0 && cth_value%B==0){
		step = Lcm;
	}else if(cth_value%A ==0){
		step =A ;
	}else{
		step = B;
	}

	for(int i=cth_value;i>=0;i=i-step){
		cout<<i<<" ";
	}
	cout<<endl;

}