#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    char c='a';
    cout<<c<<endl;
    string s="abcdefghijklmnopqrstuvwxyz";
    cout<<s<<endl;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        cout<<n<<" "<<a<<" "<<b<<endl;
        string su = s.substr(0,b);
        cout<<su<<endl;
        string sl = su;
        cout<<sl<<endl;
        // for(int i=0;i<a-b;i++){
        //     sl+=su[b-1-i];
        // }

        for(int i=0;i<a-b;i++){
            char c=su[(b-1-i)];

        }

        cout<<sl<<endl;

        // string res="";
        // for(int i=0;i<n/a;i++){
        //     res+=sl;
        // }
        // for(int i=0;i<n%a;i++){
        //     res+=sl[i];
        // }

        // cout<<res<<endl;
    }
    // string su = s.substr(0,t);
    // cout<<su<<endl;
}