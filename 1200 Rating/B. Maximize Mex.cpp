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

void Solve() {
    ll n, x;
    cin >> n >> x;
    vl v(n);
    map<ll, ll>mp, mp1;
    range(i, 0, n){
        int x; 
        cin >> x;
        mp1[x]++;
    }
    B. Maximize Mex
    ll cnt = 0;
    while(true){
        if(mp1[cnt] > 0){
            mp1[cnt]--;
            ll f = mp1[cnt];
            mp[cnt % x] += f;
            cnt++;
        }
        else if(mp[cnt % x] > 0){
            mp[cnt % x]--;
            cnt++;
        }
        else break;
    }
    
    cout << cnt << endl;
    
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}