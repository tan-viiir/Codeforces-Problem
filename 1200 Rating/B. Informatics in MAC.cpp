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
  vi v(n);
  vi vis(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    vis[v[i]] = 1;
  }
  int mex = n;
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      mex = i;
      break;
    }
  }
  set<int>st1, st2;
  int i;
  for (i = 0; i < n; i++) {
    if (v[i] < mex) {
      st1.insert(v[i]);
    }
    if (st1.size() == mex) {
      break;
    }
  }
  for (int j = i + 1; j < n; j++) {
    if (v[j] < mex) {
      st2.insert(v[j]);
    }
    if (st2.size() == mex) {
      break;
    }B. Informatics in MAC
  }
  if ((st1.size() != st2.size()) || st1.size() < mex || st2.size() < mex) {
    cout << -1 << endl;
  }
  else {
    cout << 2 << endl;
    cout << 1 << " " << i + 1 << endl;
    cout << i + 2 << ' ' << n << endl;
  }




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