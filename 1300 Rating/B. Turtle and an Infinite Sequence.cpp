#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;


bool isSet(ll x, ll bit) {
    return (( x >> bit) & 1);
}

void solve() {
    ll n, m;
    cin >> n >> m;
    ll l = max(0LL, n - m);
    ll r = n + m;
    ll ans = 0;
    ll val = 1;

    for (ll i = 0; i <= 32; i++) {
        if (r - l >= val) 
            ans += val;
        else if (isSet(l, i))
            ans += val;
        else if (isSet(r, i))
            ans += val;
        val *= 2;
    }

    cout << ans << "\n";
}

int main() {
    optimize();

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}