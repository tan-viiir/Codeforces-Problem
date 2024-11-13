#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()

void Solve() {
    ll n;
    cin >> n;

    vector<ll> a;

    for (int i = 62; i >= 0; i--) {
        ll x = 1LL << i;
        if ((x & n) == x && x != n) {
            a.pb(n - x);
        }
    }

    a.pb(n);

    cout << a.size() << endl;
    for (const auto &val : a) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) {
        Solve();
    }

    return 0;
}