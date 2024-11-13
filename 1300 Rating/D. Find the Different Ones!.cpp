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
    vi v(n+1);
    range(i, 1, n+1) cin >> v[i];
    dg(v);
    
    vi idx(n+1);
    int i=1;
    while(i < n+1){
        int val = v[i];
        int j = i+1;
        while(v[j] == val){
            j++;
        }
        while(i < j){
            idx[i] = j;
            i++;
        }
    }
    idx[n] = -1;
    dg(idx);
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        
        if(idx[l] > r)
            cout << "-1 -1" << endl;
        else{
            cout << l << " " << idx[l] << endl;;
        }
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