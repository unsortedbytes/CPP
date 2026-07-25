#include<bits/stdc++.h>
using namespace std;

float BMI(int h, int w){
	float bmi = (1.0*w)*100*100/(h*1.0*h);
	return bmi;
}

int main(){
	int h, w;
	cin>>h>>w;
	float bmi = BMI(h,w);
	if(bmi>=25){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
}