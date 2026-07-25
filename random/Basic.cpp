#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<< "Hello World"<<" " << "My name is Aditya Kumar"<<endl;
	int a = 2;
	int b = 3;
	int sum = a+b;
	char c = 'a';
	cout<<"The value of c is "<<c << endl;

	double z = 2983.28389;
	a = 1.6 ;
	a++;
	++a;
	a+=1;


	bool d = !true;
	cout<<c << " "<<z<<" "<<" "<< a<<" "<<d;

	cout<<endl<<2*3<<endl;
	cout<<20*7	<<endl;
	cout<<20%7<<endl;

	cout<<(int)c<<endl;

	int mx = INT_MAX;
	cout<<mx+1<<endl;
	int de=100000;
	int ed = 100000;


	int n;
	cin>>n;
	for(int i =0;i< n;i++ ){
		for(int j =0;j<=i;j++){
			cout<<"*";
		}cout<<endl;
	}

	int t;
	cin>>t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin, s);
		cout<<s<<endl;
	}
}