#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		multiset<long long> st;
		while(n--){
			long long x;
			cin>>x;
			st.insert(x);
		}

		long long sum =0;
		while(k--){
			auto it = st.end();
			it--;
			long long value = *it;
			sum+=value;
			st.erase(value);
			st.insert(value/2);

		}

		cout<<sum<<endl;
	}
}