#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define sz = size()
#define pb push_back
#define vinput for(auto& x: v) cin >> x;
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
#define range(i,x,y) for(int i=x;i<y;i++)
#define range_back(i,x,y) for(int i=y-1;i>=x;i--)

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
    ll n; cin >> n;
    vl v(n); vinput;
    string s; cin >> s;
    
    vl pre(n+1); pre[0] = 0;
    range(i, 1, n+1) pre[i] = pre[i-1] + v[i-1];
    dg(pre);
    
    vl L, R;
    range(i, 0, n){
        if(s[i] == 'L')
            L.pb(i);
        else if(!L.empty())
            R.pb(i);
    }
    
    dg(L); dg(R);
    
    ll ans = 0;
    if(L.empty() || R.empty()){
        cout << "0\n";
        return;
    }
    range(i, 0, L.size()){
        ll l = L[i] + 1;
        if(!R.empty() && L[i] < R.back()){
            ll r = R.back() + 1;
            ans += pre[r] - pre[l-1];
            dg(ans);
            R.pop_back();
        }
    }
    cout << ans << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}