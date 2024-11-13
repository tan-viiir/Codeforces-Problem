#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define sz size()
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define range(i,x,y) for(int i = x; i < y; i++)
#define mem(a,b) memset(a, b, sizeof(a))

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef vector<pii> vii;

const int mx = 1e6+123;
const ll MOD = 998244353;

// Fast modular exponentiation to calculate modular inverse
ll modExp(ll a, ll b, ll m) {
    ll res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % m;
        a = (a * a) % m;
        b /= 2;
    }
    return res;
}

// Function to calculate factorial % MOD
ll fact(ll n) {
    ll f = 1;
    range(i, 2, n+1) f = (f * i) % MOD;
    return f;
}

ll nPr(ll n, ll r) {
    return (fact(n) * modExp(fact(n - r), MOD - 2, MOD)) % MOD; // Use modular inverse instead of direct division
}

void Solve() {
    string s;
    cin >> s;

    vi v;
    ll n = s.sz;
    ll i = 0;
    while (i < n) {
        ll j = i;
        while (j < n && s[j] == s[i]) j++;
        v.pb(j - i); 
        i = j;
    }

    ll k = v.sz; 
    ll prod = 1;

    for (ll len : v) {
        prod = (prod * len) % MOD;
    }

    ll perm = fact(n - k);
    ll res = (prod * perm) % MOD;

    cout << n - k << " " << res << endl;
}

int main() {
    optimize();

    int t;
    cin >> t;
    while (t--) Solve();

    return 0;
}