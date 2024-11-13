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
    vector<pair<ll, ll>>power(n);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        ll mx = -1;
        for(int j=0; j<x; j++){
            ll val;
            cin >> val;
            mx = max(mx, val - j + 1);
        }
        power[i] = {mx, x};
    }
    dg(power);
    
    sort(all(power));
    ll l = power[0].ff, r = power[n-1].ff;
    ll ans = 1e12;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        ll cur = mid;
        bool ok = 1;
        
        for(int i=0; i<n; i++){
            if(cur >= power[i].ff){
                cur += power[i].ss;
            }
            else{
                ok = 0;
                break;
            }
        }
        if(ok){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
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