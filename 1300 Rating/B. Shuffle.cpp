#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long

void Solve() {
    int n, x, m;
    cin >> n >> x >> m;
    
    int a = x, b = x;
    bool ok = 0;
    while (m--) {
        int l, r;
        cin >> l >> r;
        if (!ok && x >= l && x <= r) {
            a = min(a, l);
            b = max(b, r);
            ok = 1; 
        }
        if (ok) {
            if (a <= r && b >= l) { 
                a = min(a, l);
                b = max(b, r);
            }
        }
    }
    cout << b - a + 1 << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}