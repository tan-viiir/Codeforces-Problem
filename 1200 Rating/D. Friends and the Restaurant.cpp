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
    vi a(n), b(n);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    
    vi dif(n);   
    for(int i=0; i<n; i++){
        dif[i] = b[i] - a[i];
    }
    sort(dif.rbegin(), dif.rend());
    debug(dif);
    int ans = 0;
    int l = 0, r = n - 1;
    while(l<r){
        if(dif[l] + dif[r] >= 0){
            ans++;
            l++;
            r--;
        }
        else r--;
    }
    
    cout <<  ans << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}