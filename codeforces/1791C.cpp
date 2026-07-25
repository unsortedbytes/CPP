#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int min_len = n;

        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - 1 - i]) {
                min_len -= 2;
            } else {
                break;
            }
        }

        cout << min_len << endl;
    }
    return 0;
}
