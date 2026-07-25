#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int so, eo;
		cin>>so>>eo;
		n--;
		int maxo = -1;
		bool win = true;
		while(n--){
			int s1, e1;
			cin>>s1>>e1;
			if(s1>=so && e1>=eo){
				win = false;
			}else{
				maxo=min(max(maxo, s1+1), so);
			}
		}
		if(!win){
			cout<<-1<<endl;
		}else{
			cout<<maxo<<endl;
		}
	}
}