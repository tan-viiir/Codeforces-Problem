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
ll k, x;

ll get(ll n){
    return (n * (n+1) / 2);
}

void Solve() {
   cin >> k >> x;
   
   ll l = 1, r = 2*k - 1;
   ll ans = 2*k - 1;
   bool over = 0;
   while(l <= r){
        ll mid = l + (r - l) / 2;
        
        if(mid >= k){
            over = (get(k) + get(k - 1) - get(2 * k - 1 - mid)) >= x;
        }
        else{
            over = get(mid) >= x;
        }
        if(over){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
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