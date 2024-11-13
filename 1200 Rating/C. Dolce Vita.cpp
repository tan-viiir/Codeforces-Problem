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
    int n, x;
    cin >> n >> x;
    vi v(n);
    for(int& x: v) cin >> x;
    
    sort(v.begin(), v.end());
    ll ans = x - v[0] + 1;
    if(ans <= 0){
        cout << 0 << endl;
        return;
    }
    dg(ans);
    ll sum = v[0];
    for(int i=1; i<n; i++){
        sum += v[i];
        if(sum <= x){
            int d = i + 1;
            ans += ((x - sum + 1)+(d - 1)) / d;
        }
        else break;
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