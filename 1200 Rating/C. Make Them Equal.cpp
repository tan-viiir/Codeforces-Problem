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
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    
    bool ok = true;
    for(auto u: s){
        if(u != c)
            ok = false;
    }
    if(ok){
        cout << "0\n";
        return;
    }
    for(int i=n/2; i<n; i++){
        if(s[i] == c){
            cout << "1\n" << i + 1 << endl;
            return;
        }
    }
    
    cout << "2\n" << n - 1 << " " << n << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}