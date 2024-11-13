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
  
long long lcm(int a, int b) 
{ 
    return (a / __gcd(a, b)) * b; 
}

void Solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    
    if(x == 1 && y == 1){
      cout << 0 << endl;
      return;
    }
    ll cld = n / (lcm(x, y));
    
    x = n / x - cld;
    y = n / y - cld;
    
    cout << ((n*(n+1)/2) - ((n - x)*(n-x+1)/2)) - (y * (y+1) / 2) << endl;
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