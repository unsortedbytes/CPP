#include<bits/stdc++.h>
using namespace std;

void second(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    if (n==1){
        cout<<-1<<endl;
        return;
    }
    int largest = -1;
    int sec = -1;
    for(int i=0;i<n;i++){
        if(v[i]>largest){
            sec = largest;
            largest = v[i];
        }else if (v[i]<largest && v[i]> sec){
            sec = v[i];
        }
    }
    cout<<sec<<endl;

}

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        second();
    }
}