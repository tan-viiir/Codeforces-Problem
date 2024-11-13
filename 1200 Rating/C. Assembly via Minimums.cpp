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

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

void Solve() {
    int n;
    cin >> n;
    int m = n*(n-1)/2;
    vector<int>v(m);
    for(auto& x: v) cin >> x;
    sort(v.begin(), v.end());
    for(int i=0; i<m; i+= --n) cout << v[i] << " ";
    cout << 1000000000 << endl;
    
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; Tanvir();
    // }
    return 0;
}