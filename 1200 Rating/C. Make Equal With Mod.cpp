#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define vinput for(auto& x: v) cin >> x;
#define all(x) x.begin(),x.end()
#define range(i,x,y) for(int i=x;i<=y;i++)
#define range_back(i,x,y) for(int i=y;i>=x;i--)

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
    int n;
    cin >> n;
    vi v(n);
    vinput;
    
    sort(all(v));
    bool ok1 = false, cons = false;
    range(i, 0, n-1){
        if(v[i] == 1) ok1 = true;
        if(v[i] + 1 == v[i+1] && i < n-1) cons = true;
    }
    
    cout << (ok1 && cons ? "NO\n" : "YES\n");
    
    
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}