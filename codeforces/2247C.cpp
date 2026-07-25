#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        int d1 = 0, d0 = 0;          // a=1,b=0  |  a=0,b=1
        bool hasOne = false, hasZZ = false;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                hasOne = true;
                if (b[i] == 0) d1++;
            } else {
                if (b[i] == 1) d0++;
                else hasZZ = true;   // a=b=0
            }
        }

        int ans;
        if (d1 == 0 && d0 == 0) ans = 0;
        else if (d1 % 2 == 1) ans = 1;
        else if (d1 > 0) ans = 2;
        else ans = (hasOne && hasZZ) ? 2 : -1;  // d1==0, d0>0

        cout << ans << '\n';
    }
    return 0;
}