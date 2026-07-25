#include <bits/stdc++.h>
using namespace std;

int getMaxXor(vector<int>& a) {
    int n = a.size();
    int basis[31] = {0};

    // Build linear basis
    for (int x : a) {
        for (int b = 30; b >= 0; b--) {
            if (!(x & (1 << b))) continue;
            if (!basis[b]) {
                basis[b] = x;
                break;
            }
            x ^= basis[b];
        }
    }

    // Get max XOR
    int res = 0;
    for (int b = 30; b >= 0; b--) {
        res = max(res, res ^ basis[b]);
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int total_xor = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_xor ^= a[i];
        }

        if (n % 2 == 1) {
            cout << total_xor << "\n";
        } else {
            cout << getMaxXor(a) << "\n";
        }
    }
}