#include<bits/stdc++.h>
using namespace std;

int main(){
	pair<int,string> p;
	p = make_pair(2, "abc");
	p ={3, "adbcd"};
	cout<<p.first<<endl;
	cout<<p.second<<endl;

	pair<int,string> &p1 = p;
	p1.first = 5;
	cout<<p.first<<endl;

	int a[] = {1, 2, 3};
	char b[] = {'a', 'b', 'c'};
	pair<int,char> p_array[3];
	p_array[0] = {1, 'a'};
	p_array[1] = {2, 'b'};
	p_array[2] = {3, 'c'};
	swap(p_array[0], p_array[2]);
	for(int i=0;i<3;++i){
		cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
}