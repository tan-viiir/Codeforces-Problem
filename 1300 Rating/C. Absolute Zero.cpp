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

const int mx = 2e5+123;
vi pre(mx);
bool vis[mx];

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
    int n;
    cin >> n;
    vi v(n);
    vinput;
    
    bool even = 0, odd = 0;
    range(i, 0, n){
        if(v[i] & 1)
            odd = 1;
        else
            even = 1;
    }
    if(even && odd){
        cout << -1 << endl;
        return;
    }
    vi ans;
    for(int i = 29; i>=0; i--){
        ans.pb(1<<i);
    }
    if(even)
        ans.pb(1);
    cout << ans.sz<< endl;
    for(auto u: ans){
        cout << u << " ";
    }
    cout << endl;
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}