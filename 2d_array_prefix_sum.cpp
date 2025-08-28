#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int arr[N][N];

int main(){
	int n;
	cin>>n;
	for(int i =1;i<=n;++i){
		for(int j = 1;j<=n;++j){
			cin>>arr[i][j];
		}
	}

	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		long long int sum = 0;
		for(int i=a;i<=c;++i){
			for (int j=b;j<=d;++j){
				sum +=arr[i][j];
			}
		}
		cout<<sum<<endl;
	}
}