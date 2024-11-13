#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long

void Solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    while(k > 0 && x != 1){
        ll need = (x / y + 1) * y - x;
        need = max(1ll, need);
        need = min(k, need);
        x += need;
        k -= need;
        while(x % y == 0){
            x /= y;
        }
    }
    
    cout << x + k % (y - 1) << endl;
}

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) Solve();

    return 0;
}