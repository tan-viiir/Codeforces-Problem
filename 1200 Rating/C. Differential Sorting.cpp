#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vinput for(auto& x: v) cin >> x;
#define range(i,x,y) for(int i=x;i<y;i++)
#define range_back(i,x,y) for(int i=y;i>x;i--)

typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<pii> vii;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define dg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dg(x)
#endif

void Solve() {
    int n;
    cin >> n;
    vi v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    if (v[n - 1] > v[n]) {
        cout << -1 << endl;
        return;
    }

    else {
        if (v[n] < 0) {
            if (is_sorted(v.begin()+1, v.end())) {
                cout << 0 << endl;
            }
            else cout << -1 << endl;
        }
        else {
            cout << n - 2 << endl;
            for (int i = 1; i <= n - 2; i++) {
                cout << i << " " << n - 1 << " " << n << endl;
            }
        }

    }

}

int main() {
    optimize();

    int t = 1;
    cin >> t;
    while (t--) Solve();

    return 0;
}