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

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

void Solve() {
  int n;
  cin >> n;
  vector<pair<ll, ll>>m(n), s(n), b(n);
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    m[i].first = x;
    m[i].second = i;
  }
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    s[i].first = x;
    s[i].second = i;
  }
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    b[i].first = x;
    b[i].second = i;
  }
  
  sort(m.rbegin(), m.rend());
  sort(s.rbegin(), s.rend());
  sort(b.rbegin(), b.rend());
  
  ll ans = 0;
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      for(int k=0; k<3; k++){
        if(m[i].ss != s[j].ss && m[i].ss != b[k].ss && s[j].ss != b[k].ss){
          ans = max(ans, m[i].ff + s[j].ff + b[k].ff);
        }
      }
    }
  }
  cout << ans << endl;
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