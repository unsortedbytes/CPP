#include<bits/stdc++.h>
using namespace std;

int arr[1001];

int main(){
	int i =1;
	int index = 1;
	while(true){
		if(index>1000) break;
		if(i%3==0 || i%10 == 3) {
			i++;
			continue;
		}		
		arr[index]=i;
		i++;
		index++; 
	}

	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<arr[x]<<endl;
	}
}