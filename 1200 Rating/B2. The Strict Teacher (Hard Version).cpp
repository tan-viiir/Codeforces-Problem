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
    int n, m, q;
    cin >> n >> m >> q;
    vi v(m+1);
    range(i, 1, m+1) cin >> v[i];
    
    sort(all(v));
    dg(v);
    while(q--){
        int d;
        cin >> d;
        int ans;
        auto up = upper_bound(v.begin(), v.end(), d);
        if(up == v.begin()+1){
            ans = *up - 1;
        }
        else if(up == v.end()){
            ans = n - *(up-1);
        }
        else{
            int b = *up;
            up--;
            int a = *up;
            ans = (b - a) / 2;
        }
        
        cout << ans << endl;
    }
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}