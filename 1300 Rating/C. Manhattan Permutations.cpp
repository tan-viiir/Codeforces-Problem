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
    ll n, k;
    cin >> n >> k;
    if(k % 2 != 0){
        cout << "NO\n";
        return;
    }
    vector<ll>ans(n+1);
    for(int i=1; i<=n; i++) ans[i] = i;
    
    int x = n - 1;
    k /= 2;
    for(int i=1; i<n+1; i++){
        if(k <= x){
            swap(ans[i], ans[i+k]);
            k = 0;
            break;
        }
        swap(ans[i], ans[i+x]);
        k -= x;
        x -= 2;
        if(x <= 0)
            break;   
    }
    if(k > 0)
        cout << "NO\n";
    else{
        cout << "YES\n";
        for(int i=1; i<=n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}