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
    vi v(n);
    for(auto& x: v) cin >> x;
    int cnt = 1, ans = INT_MAX;
    for(int i=0; i<n-1; i++){
      if(v[i] == v[i+1])
        cnt++;
      else{
        ans = min(cnt, ans);
        cnt = 1;
        i++;
      }
    }
    ans = min(cnt, ans);
    cout << (ans == n ? -1 : ans) << endl;
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