#include<bits/stdc++.h>
using namespace std;

vector


void generate(vector<int> &subset, int i, vector<int> &nums){

	if(i == nums.size()){

	}
	// not in subset
	generate(subset,, i+1, nums);

	//  ith element
	subset.push_back(nums[i]);
	generate(subset, i+1, nums);
	subset.pop_back();

}

int main(){

}