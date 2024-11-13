#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define sz size()
#define pb push_back
#define vinput for(auto& x: v) cin >> x;
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define range(i,x,y) for(int i=x;i<y;i++)
#define range_back(i,x,y) for(int i=y-1;i>=x;i--)
#define mem(a,b) memset(a, b, sizeof(a) )

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

const int mx = 1e6+123;
vi pre(mx);
bool vis[mx];

void Solve() {
    int n;
    cin >> n;
    vi v(n);
    vinput;
    
    ll mx_first = INT_MIN, sum = 0;
    range(i, 0, n-1){
        sum += v[i];
        mx_first = max(mx_first, sum);
        
        if(sum < 0)
            sum = 0;
    }
    ll mx_last = INT_MIN;
    sum = 0;
    range(i, 1, n){
        sum += v[i];
        mx_last = max(mx_last, sum);
        
        if(sum < 0)
            sum = 0;
    }
    
    ll total_sum = accumulate(all(v), 0ll);
    
    ll mx = max(mx_last, mx_first);
    
    cout << (total_sum > mx ? "YES\n" : "NO\n");
    
    
    
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}