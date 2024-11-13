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


void Solve() {
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    
    ll d = 2;
    while(1){
      set<ll>st;
      for(int i=0; i<n; i++){
        st.insert(v[i] % d);
      }
      if(1ll * st.size() == 2) break;
      d *= 2;
    }
    cout << d << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}