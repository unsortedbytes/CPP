#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    bool found = false;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(x == 67) {
            found = true;
        }
    }

    cout << (found ? "YES\n" : "NO\n");
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}