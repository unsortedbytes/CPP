#include<bits/stdc++.h>
using namespace std;

int main(){
    int n =0;
    int sum = 1994;
    while(sum > 0){
        n++;
        sum-=floor((log(n))/log(2));
    }
    cout<<n;
}