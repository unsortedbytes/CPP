#include <iostream>
#include <vector>

using namespace std;

// Simple Sieve to get enough primes
const int MAX_PRIME = 200000;
vector<int> primes;
void sieve() {
    vector<bool> is_prime(MAX_PRIME, true);
    is_prime = is_prime = false;
    for (int p = 2; p * p < MAX_PRIME; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i < MAX_PRIME; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p < MAX_PRIME; p++) {
        if (is_prime[p]) primes.push_back(p);
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        // Construct a_i using the product of two adjacent primes
        long long val = (long long)primes[i] * primes[i+1];
        cout << val << (i == n - 1 ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}