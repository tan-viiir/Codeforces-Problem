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
    vi v(n);
    vinput;
    
    map<int, int>mp;
    range(i, 0, n){
        for(int j=2; j*j<=v[i]; j++){
            while(v[i] % j == 0){
                v[i] /= j;
                mp[j]++;
            }
        }
        if(v[i] != 1)
            mp[v[i]]++;
    }
    
    int res = 0, rem = 0;
    for(auto u: mp){
        int cnt = u.ss;
        
        res += cnt/2;
        rem += cnt%2;
    }
    res += rem/3;
    
    cout << res << endl;
    
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}