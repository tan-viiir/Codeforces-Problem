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

int lcm(int a, int b){
    int gcd = __gcd(a, b);
    
    return (a / gcd) * b;
}

void Solve() {
    int n;
    cin >> n;
    vi v(n);
    vinput;
    
    vi b(n+1);
    b[0] = v[0]; b[n] = v[n-1];
    range(i, 1, n-1){
        b[i] = lcm(v[i], v[i-1]);
    }
    range(i, 0, n-2){
        if(__gcd(b[i], b[i+1]) == v[i])
            continue;
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}