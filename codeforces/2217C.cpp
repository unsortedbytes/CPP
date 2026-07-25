#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, m, a, b;
    cin >> n >> m >> a >> b;

    if(__gcd(n, a) == 1 && __gcd(m, b) == 1){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}