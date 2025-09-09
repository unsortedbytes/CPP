#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x){
	return x>0;
}

int main(){
	cout<< [](int x){return x+2;}(3)<<endl;
	cout<< [](int x, int y){return x+y;}(4,6)<<endl;

	auto sum = [](int x, int y){return x+y;};

	cout<<sum(2, 4)<<endl;


	vector<int> v = {-2, -3 , 5};
	cout<<all_of(v.begin(), v.end(), [](int x){return x>0;})<<endl;
	cout<<any_of(v.begin(), v.end(), is_positive)<<endl;
	cout<<none_of(v.begin(), v.end(), is_positive)<<endl;
}