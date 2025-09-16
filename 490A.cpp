#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int pog = 1;
	int m =2;
	int pe = 3;

	vector<int> programing;
	vector<int> maths;
	vector<int> pes;

	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x == pog){
			programing.push_back(i);
		}else if(x == m){
			maths.push_back(i);
		}else{
			pes.push_back(i);
		}
	}

	int a = programing.size();
	int b = maths.size();
	int c = pes.size();
	int no=min(a,min(b,c));

	cout<<no<<endl;
	for(int i=0;i<no;i++){
		cout<<programing[i]<<" "<<maths[i]<<" "<<pes[i]<<endl;
	}

}