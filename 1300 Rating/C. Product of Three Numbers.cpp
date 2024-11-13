#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long

void Solve() {
    int n;
    cin >> n;
    
    int x = -1, y = -1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            x = i;
            n /= i;
            break;
        }
    }
    if (x == -1) {
        cout << "NO\n";
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && i != x) {
            y = i;
            n /= i;
            break;
        }
    }
    if (y == -1 || n == x || n == y || n == 1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << x << " " << y << " " << n << "\n";
}

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) Solve();

    return 0;
}