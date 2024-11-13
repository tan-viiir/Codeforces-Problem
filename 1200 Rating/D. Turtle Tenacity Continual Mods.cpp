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
    vi v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    if(v[0] != v[1]) cout << "YES\n";
    else{
        for(int i=2; i<n; i++){
            if(v[i] % v[0] != 0){
                cout << "YES\n";
                return;
            } 
        }
        cout << "NO\n";
    }
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}