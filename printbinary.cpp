#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10;i>=0;--i){
		cout<<((num>>i)&1);
	}
	cout<<endl;
}

int main(){
	printBinary(98);
	int a = 29;
	printBinary(a);
	printBinary(a&(~(1<<4)));

	// togle
	printBinary(a^(1<<2));

	cout<<__builtin_popcount(a)<<endl;
	cout<<__builtin_popcountll(1LL<<35)<<endl;	

	char A='A';
	// char a=A | (1<<5);
	// 1<<5 is space 
	cout<<char('d'&'_')<<endl;
}