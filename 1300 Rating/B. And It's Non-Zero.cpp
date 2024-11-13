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

const int mxn = 2e5+123;
const int mxl = 20;
int pre[mxl][mxn];
// vi pre(mx);
bool vis[mxn];

ll step(ll n){
    ll step = 0;
    while(n > 0){
        n /= 3; 
        step++;
    }
    return step;
}

//Solution Starts from here...

void Solve() {
    ll l, r;
    cin >> l >> r;
    
    ll ans = r - l + 1;
    for(int i=0; i<mxl; i++){
        ll cnt = pre[i][r] - pre[i][l-1];
        
        ans = min(ans, r - l + 1 - cnt);
    }
    cout << ans << endl;
}

int main() {
    optimize();
    
    for(int i=0; i<20; i++){
        for(int j=1; j<mxn; j++){
            pre[i][j] = pre[i][j-1] + ((j >> i) & 1);
        }
    }
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}