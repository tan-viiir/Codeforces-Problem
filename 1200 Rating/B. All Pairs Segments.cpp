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
    int n, k;
    cin >> n >> k;
    vl v(n+1), v1(k+1);
    range(i, 1, n+1) cin >> v[i];
    range(i, 1, k+1) cin >> v1[i];
    
    map<ll, ll>mp;
    range(i, 1, n+1){
        ll val = v[i];
        ll before = i - 1;
        ll after = n - i;
        ll seg = (before+1) * (after+1) - 1;
        mp[seg]++;
        val++; 
        if (i > 1)
            {
                ll elementsInBetween = v[i] - v[i - 1] - 1;
                seg = before * (after + 1);
                mp[seg] += elementsInBetween;
            }
    }
    dg(mp);
    // dg(v1);
    range(i, 1, k+1){
        ll x = v1[i];
        dg(x);
        cout << mp[x] << " ";
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