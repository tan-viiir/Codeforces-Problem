#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define ff first
#define ss second
#define sz = size()
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
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>>pre1(n+1, vector<int>(26, 0));
    vector<vector<int>>pre2(n+1, vector<int>(26, 0));
    
    for(int i=1; i<=n; i++){
        char c;
        cin >> c;  
        pre1[i][c-'a']++;
        
        for(int j=0; j<26; j++){
            pre1[i][j] += pre1[i-1][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        char c;
        cin >> c;
        pre2[i][c-'a']++;
        
        for(int j=0; j<26; j++){
            pre2[i][j] += pre2[i-1][j];
        }
    }
    
    while(q--){
        int l, r;
        cin >> l >> r;
        
        int dif = 0;
        for(int c=0; c<26; c++){
            int a = pre1[r][c] - pre1[l-1][c];
            int b = pre2[r][c] - pre2[l-1][c];
            
            dif += abs(a - b);
        }
        
        cout << dif / 2 << endl;
    }
}

int main() {
    optimize();
    
    int t = 1;
    cin >> t;
    while (t--) Solve();
    
    return 0;
}