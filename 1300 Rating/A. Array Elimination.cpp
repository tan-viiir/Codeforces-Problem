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

string dtob(int n){
    string bin = "";
    while(n > 0){
        bin += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin; 
}

void Solve() {
    int n;
    cin >> n;
    vi v(n);
    vinput;

    vector<int> cnt(32, 0);
    
    range(i, 0, n) {
        int num = v[i];
        for (int j = 0; j < 32; j++) {
            if (num & (1 << j)) {
                cnt[j]++;
            }
        }
    }
    
    dg(cnt);
    range(i, 1, n + 1) {
        bool ok = true;
        range(j, 0, 32) {
            if (cnt[j] % i != 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << i << " ";
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