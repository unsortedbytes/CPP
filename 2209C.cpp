#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int candidate = 1;
    for (int i = 2; i <= 2 * n; ++i) {
        cout << "? " << candidate << " " << i << endl; // endl flushes automatically
        
        int response;
        cin >> response;
        
        if (response == 1) {
            // We found a zero! (Actually, both candidate and i are 0)
            cout << "! " << candidate << endl;
            return;
        }
        if (response == -1) exit(0); // Security check
        
        // If we reach n+1 queries without a '1', 
        // there is a specific logic needed for the adaptive part, 
        // but usually, comparing elements against index 1 is enough.
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}