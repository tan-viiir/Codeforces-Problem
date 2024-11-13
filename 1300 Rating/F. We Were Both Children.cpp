#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long

void Solve() {
    int n;
    cin >> n;
    vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
    
    // Count the frequency of elements <= n
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(x <= n) ++cnt[x];
    }

    // For each number, update its multiples
    for(int i = 1; i <= n; ++i) {
        for(int j = i; j <= n; j += i) {
            mx[j] += cnt[i];
        }
    }

    // Output the maximum number of divisors
    cout << *max_element(mx.begin(), mx.end()) << "\n";
}

int main() {
    optimize();
    
    int t;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}