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
    
    vector<int>f{0, 1, 2, 1, 2, 3, 1, 2, 3, 2, 1, 2, 2, 2, 3};
    if(n < 15) cout << f[n % 15];
    else if(n % 15 == 5) cout << n / 15 + 1;
    else if(n % 15 == 8) cout << n / 15 + 2;
    else cout << n / 15 + f[n % 15];
    
    cout << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}