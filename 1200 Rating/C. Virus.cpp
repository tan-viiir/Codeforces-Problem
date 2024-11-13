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
#define dg(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define dg(x)
#endif

void Solve() {
    int n, m;
    cin >> n >> m;
    vi v(m);
    for (int i = 0; i < m; i++) cin >> v[i];
    sort(v.begin(), v.end());

    vi dif;
    dif.pb(n - v.back() + v[0] - 1);
    for (int i = 1; i < m; i++) {
        dif.pb(v[i] - v[i - 1] - 1);
    }
    sort(dif.rbegin(), dif.rend());
    dg(dif);
    int day = 0, cnt = 0;
    if (dif[0] == 0) {
        cout << n << endl;
        return;
    }
    if (dif[0] > 2)
        cnt = dif[0] - 1;
    else
        cnt = 1;
    
    dg(cnt);
    for (int i = 1; i < dif.size(); i++) {
        int x = dif[i] - (i * 4);
        dg(x);
        if(x == 1) cnt++;
        else if (x > 1)
            cnt += --x;
        else break;
    }
    
    cout << n - cnt << endl;

}

int main() {
    optimize();

    int t = 1;
    cin >> t;
    while (t--) Solve();

    return 0;
}