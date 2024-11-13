#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define vi vector<ll>

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

ll n, h;

bool check(ll x, vector<ll>&v) {
    ll add = x;
    for (int i = 0; i < n - 1; i++) {
        add += min((v[i + 1]-v[i]), x);
    }
    return add >= h;
}

void Tanvir() {
    cin >> n >> h;
    vi v(n);
    for (auto& x : v) cin >> x;

    ll l = 1, r = 1e18;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (check(mid, v)) r = mid - 1;
        else l = mid + 1;
    }
    cout << r + 1 << endl;

}

int main() {
    optimize();

    int t = 1;
    cin >> t;
    while (t--) Tanvir();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; Tanvir();
    // }
    return 0;
}