#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void Solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = ' ' + s;
    vi vis(n + 1, 0);

    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] == '0') {
            int k = i;
            debug(k);
            int mul = 1;
            while (k * mul <= n && s[k * mul] == '0') {
                if (!vis[k * mul])
                    ans += k;
                vis[k * mul] = 1;
                mul++;
            }
        }
    }
    cout << ans << endl;

}

int main() {
    optimize();

    int t = 1;
    cin >> t;
    while (t--) Solve();

    return 0;
}