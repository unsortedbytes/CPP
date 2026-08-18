#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long n;cin>>n;
	long long count =0;
	vector<deque<int>>v(n);
	for(long long i=0;i<n;i++){
		long long x;cin>>x;
		count+=x;
		for(long long j=0;j<x;j++){
			long long y;cin>>y;
			v[i].push_back(y);
		}
	}

	long long at = 0, bt = 0;
	bool turn = false;

	for(long long i=0;i<count;i++){
		long long m_i = -1, m_j=-1;
		if(!turn){
			for(long long j=0;j<n;j++){
				if(!v[j].empty()){
					if(v[j].front()>m_j){
						m_i = j;
						m_j = v[j].front();
					}
				}
			}

			if(m_j!=-1){
				at+=m_j;
				v[m_i].pop_front();
			}
		}else{
			for(long long j =0;j<n;j++){
				if(!v[j].empty() && v[j].back()>m_j){
					m_i=j;
					m_j=v[j].back();
				}
			}
			if(m_j!=-1){
				bt+=m_j;
				v[m_i].pop_back();
			}
		}
		turn = !turn;

	}

	cout<<at<<" "<<bt<<endl;


}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cin.tie(0);
	solve();
}