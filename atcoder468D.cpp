#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &s, int l, int r) {
    int diff = 0;

    while (l < r) {
        if (s[l] != s[r]) {
            diff++;
            if (diff > 1) return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(){
	string s;
	cin>>s;
	long long noof = 0;
	for(int i=0;i<s.size();i++){
		for(int j=i;j<s.size();j++){
			// string sub = s.substr(i,j-i+1);
			if(palindrome(s, i, j)) noof++;
		}
	}
	cout<<noof;
}