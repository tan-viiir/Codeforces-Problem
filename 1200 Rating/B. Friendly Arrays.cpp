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



void Solve() {
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
        
    int br = 0;
    for(auto u: b) br |= u; // al element or
    int xr = 0, ans = 0;
    for(int i=0; i<n; i++){
        xr ^= a[i];
        ans ^= (a[i] | br);
    }
    
    
    if(n & 1){
        cout << xr << " " << ans << endl;
    }
    else{
        cout << ans << " " <<  xr << endl;
    }
        
    
    
}

int main() {
    optimize();

    int t = 1;
    cin >> t;
    while (t--) Solve();

    return 0;
}