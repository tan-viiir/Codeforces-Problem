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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for(int& x: a) cin >> x;
    
    map<int, int> mp;
    mp[0] = -1;
    int psum = 0, len = 0;
    for(int i=0; i<n; i++){
        psum += a[i];
        
        if(mp.find(psum - k) != mp.end()){
            len = max(len, i - mp[psum - k]);
        }
        
        if(mp.find(psum) == mp.end()){
            mp[psum] = i;
        }
    }
    
    cout << (len == 0 ? -1 : n - len) << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}