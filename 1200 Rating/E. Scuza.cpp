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
    int n, q;
    cin >> n >> q;
    vi v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    vl pre(n);
    pre[0] = v[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1] + v[i];
    vi atleast(n);
    int mxi = v[0];
    for(int i=0; i<n; i++){
        if(v[i] > mxi)
            mxi = v[i];
        atleast[i] = mxi;
    }
    
    debug(atleast);
    while(q--){
        int x;
        cin >> x;
        debug(x);
        int it = upper_bound(atleast.begin(), atleast.end(), x) - atleast.begin();
        debug(it);
        
        if(it == 0) cout << "0 ";
        else cout << pre[it - 1] << " ";
    }
    cout << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}