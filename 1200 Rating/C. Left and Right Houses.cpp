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
  string s;
  cin >> s;
  vector<int>pre(n + 1);
  for (int i = 0; i < n; i++) {
    if (s[i] == '1')
      pre[i + 1] = ++pre[i + 1] + pre[i];
    else pre[i+1] = pre[i];
  }
  
  int ans = -1;
  for(int i=0; i<=n; i++){
    int left = i - pre[i];
    int right = pre[n] - pre[i];
    if(i <= 2 * left && n - i <= 2 * right){
      if(ans == -1 || abs(n - 2 * i) < abs(n - 2 * ans)){
        ans = i;
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